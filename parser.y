%{
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <fstream>
#include "helper1.cpp"

using namespace std;

int yylex(void);
void yyerror(char *s){
    fprintf(stderr,"Unknown errors detected.\n");
    extern int lineno;
    }
    
    
extern int lineno;
extern int yylineno;

vector<function_struct> func_table;
struct function_struct *active_func_ptr;
struct function_struct call_name_ptr;
vector<val_type> args_list;
vector<variable> var_list;


string global_func_name = "Global";
struct function_struct global(global_func_name ,NONE);

int sem_flag=0,gen_flag=0,level=0,isvar=1;
%}

%union{
	node *Node;
}

%token 	<Node>	NUM INT FLOAT FLOAT_CONST STRING STRING_CONST BOOL DEL ID COMPARATOR CLOSESQ OPENSQ OPENBR BOOL_CONST
%token  <Node>  CLOSEBR OPENPR PROCESSORS ID1
%token  <Node>  CLOSEPR EQUAL QUOTES COMMA COLON DOT 
%token 	<Node>	FOR WHILE IF ELSE  
%token  <Node>  IS_RUNNING SUBMIT_JOBS GET_CLOCK_SPEED DISCARD_JOB JOB_ID
%token  <Node>  GET_AVAILABLE_MEMORY GET_MEMORY MEM_SIZE
%token  <Node>  PROCESSOR ISA CLOCK_SPEED L1_MEM ARM AMD CDC MIPS MEMORY MEMORY_TYPE MEMORY_SIZE 
%token  <Node>  PRIMARY SECONDARY CACHE LINK START_POINT END_POINT BANDWIDTH JOB FLOPS_REQUIRED 
%token  <Node>  DEADLINE MEM_REQUIRED AFFINITY RUN WAIT
%token  <Node>  CLUSTER TOPOLOGY NAME STAR RING BUS 
%token  <Node>  SUM VOID
%token	<Node>	MULT RETURN
%token	<Node>	UNARY_OP
%start 	program

%type <Node> program statement_list statement var_decl loop ifstmnt var_type variable for_loop while_loop expr condition arithmatic_op mul factor func_dec func_head result_id return_type decl_plist decl_list return_statement return_value function_call func_call parameter_list param parameter array constants

%% 
program : statement_list {
	
	printf("program : statement_list\n\n\n");
	$$ = add_node("program",$1);
    //$$->code = $1->code;
    //$$->code = generate_final_code($$->code,global_var_table);
    if( gen_flag==0 && sem_flag==0){
        printf("Compilation successful.\n");
        //print_nodes($$);
        //ofstream output;
	    //output.open("tree.txt");
        //print_nodes($$,output);
        //print_symbol(global_var_table);
        //print_func(func_table);
        //output.close();
        //fprintf(fout,$$->code.c_str());
        //printf("ASM file generated.\n");
    }
    else if( gen_flag==1 && sem_flag==0){
        printf("Syntax errors found.\n");
    }
    else if(gen_flag==0 && sem_flag==1){
        printf("Semantic errors found.\n");
    }
    print_func(func_table);

}
		;

statement_list  : statement statement_list {
		printf("statement_list : statement statement_list\n");
		$$ = add_node("statement_list",$1,$2);
	    //$$->code = $1->code + $2->code;
    }
	| {
		printf(" matched epsilon\n");
		$$ = NULL;
	}
	;

statement : var_decl DEL{
		printf("statement : var_decl DEL\n");
		$$ = add_node("statement",$1,$2);
   		//$$->code = $1->code + $2->code;
   		}
	| loop {
		printf("statement : loop\n");
		$$ = add_node("statement",$1);
   		//$$->code = $1->code;
   		}
	| ifstmnt {
		printf("statement : ifstmnt \n");
		$$ = add_node("statement",$1);
	   	//$$->code = $1->code;
   		}
	| expr DEL {
		printf("statement : expr DEL\n");
		$$ = add_node("statement",$1,$2);
	   	//$$->code = $1->code + $2->code;
   		}
	| func_dec {
		printf("statement : func_dec \n");
		$$ = add_node("statement",$1);
   		//$$->code = $1->code;
   		}
	| function_call DEL {
		printf("statement : func_call \n");
		$$ = add_node("statement",$1,$2);
   		//$$->code = $1->code + $2->code;
   		}
	;

func_dec : func_head OPENBR statement_list return_statement CLOSEBR {
	printf("func_dec : func_head {statement_list} \n");
	}
		;

func_head : result_id OPENPR decl_plist CLOSEPR {
printf("func_head : result_id ( decl_plist ) \n");
			level=level+1;
			}
			;

result_id : return_type ID1 {
			printf("result_id : return_type ID \n");
			if( check_func_name(func_table,$2->name)){
				printf("1\n");
				function_struct cur_func($2->name ,$1->type);
		        func_table.push_back(cur_func);
		        active_func_ptr = &func_table.back();
		        cout<<"Active function: "<<active_func_ptr->name<< " type: " <<active_func_ptr->return_type<<endl;
		    }
		    else{
		    	printf("2\n");
			    cout<<"Function name: "<<$2->name<<" already exists"<<endl;
			    $$->type=ERROR;
			    sem_flag=1;
		    }
		    isvar=0;
		}
		;

decl_plist : decl_list  {
			printf("decl_plist : decl_list \n");
			$$ = add_node("decl_plist",$1);
			isvar=1;
			}
			| {
			printf("EPSILON IN decl_plist \n");
			isvar=1;
			}
			;

decl_list : var_decl COMMA decl_list {
			printf("decl_list : var_decl COMMA decl_list \n");
			//checked automatically in var decl of repitition
			}
			| var_decl {printf("decl_list : var_decl \n");}
			;

return_type : VOID {
			printf("return_type : VOID \n");
			$$->type=NONE;
			}
			| var_type {
			printf("return_type : var_type \n");
			$$->type=$1->type;
			}
			;

return_statement: RETURN return_value DEL {
					printf("return_statement: RETURN return_value DEL \n");
					level = level-1;
					cout<<"Active func return type: "<<active_func_ptr->return_type<<" variable type: "<<$2->type<<endl;
					if(active_func_ptr->return_type!=$2->type){
						sem_flag=1;
						$$->type=ERROR;
						cout<<"ERROR: Return type mismatch of function "<<active_func_ptr->name<<endl;
					}
					active_func_ptr=&global;

				}
				| {
					printf("MATCHED EPSILON IN RETURN STMNT \n");
					level = level-1;
					cout<<"Active func return type: "<<active_func_ptr->return_type<<" variable type: NONE"<<endl;
					/*if(active_func_ptr->return_type!=NONE){
							sem_flag=1;
							$$->type=ERROR;

							printf("no return expected for function %s at line no %d",active_func_ptr->name,yylineno);
						}*/
					active_func_ptr=&global;

				}
				;

return_value: variable {
			printf("return_value: variable \n");
			$$->type=$1->type;
			}
			| constants {
			printf("return_value: constants \n");
			$$->type=$1->type;
			}
			;

function_call: ID EQUAL func_call {
				struct variable *temp=find_var(&global,&global,$1->name);
				if( temp!=NULL ){
					$1->type = temp->type;

					if($1->type !=$3->type){
						cout<<"ERROR: Type mismatch for function call"<<endl;
						sem_flag = 1;
					}
					else{

					}
				}
				else{
					$$->type=ERROR;
					cout<<"ERROR: Variable "<< $1->name<<" not declared"<<endl;
					sem_flag=1;
				}
				printf("function_call: ID EQUAL func_call \n");
				}
			| func_call {printf("function_call: func_call \n");}
			;

func_call : ID1 OPENPR parameter_list CLOSEPR {
			printf("func_call : ID1 OPENPR parameter_list CLOSEPR\n");
			function_struct * temp = find_function(func_table,$2->name);
			
			if(!temp ){
				$$->type = temp->return_type;

			}
			else{
				printf("Error at line %d: Function not declared.\n",yylineno);
				sem_flag = 1;
			}
			}	

parameter_list: param {printf("parameter_list: param \n");}	
			| 	{printf("parameter_list: epsilon \n");}	
			;

param: param COMMA parameter {
		printf("param: param COMMA parameter \n");

		}
		| parameter {
		printf("param: parameter \n");
		}
		;

parameter : variable {
		printf("parameter : variable \n");
		$$->type=$1->type;
		$$->val=$1->val;
		add_node("parameter",$1);
		}
		| constants {
		printf("parameter : constants \n");
		$$->type=$1->type;
		$$->val=$1->val;
		add_node("parameter",$1);
		}
		;

constants : NUM  {
		printf("constants : NUM\n");
		$$->type=$1->type;
		$$->val=$1->val;
		add_node("constants",$1);
		}
		| FLOAT_CONST {
		printf("parameter_list: FLOAT_CONST\n");
		$$->type=$1->type;
		$$->val=$1->val;
		add_node("constants",$1);
		}
		| STRING_CONST {
		printf("parameter_list: STRING_CONST\n");
		$$->type=$1->type;
		$$->val=$1->val;
		add_node("constants",$1);
		}
		| BOOL_CONST {
		printf("parameter_list: BOOL_CONST\n");
		$$->type=$1->type;
		$$->val=$1->val;
		add_node("constants",$1);
		}

		;

var_decl : var_type ID {
	printf("var_decl : var_type variable\n");
	if(isvar==0){
		printf("the given id is a parameter\n");
		if(check_func_varlist(active_func_ptr,$2->name)){
			variable newvar=variable($2->name,$1->type,$2->type1,level);
			newvar.dim=$2->dim;
			active_func_ptr->params.push_back(newvar);
		}
		else{
		 $$->type=ERROR;
		 printf("ERROR: Redeclaration of parameter ");
		 cout<<$2->name<<endl;
		 printf(" line: %d\n", yylineno);
		 sem_flag=1;
		}
	}
	else{
		printf("The given id is a variable\n");
		if(check_func_varlist(active_func_ptr,$2->name)){
			variable newvar=variable($2->name,$1->type,$2->type1,level);
			newvar.dim=$2->dim;
			active_func_ptr->local_var.push_back(newvar);
		}
		else{
		 $$->type=ERROR;
		 printf("ERROR: Redeclaration of variable ");
		 cout<<$2->name<<endl;
		 printf(" line: %d\n", yylineno);
		 sem_flag=1;
		}
	}
    }
		 ;

var_type : INT{
		printf("var_type : INT\n");
		$$ = add_node("var_type",$1);
	    $$->type = INT1;
	    printf("$$-type = int\n");
	    }
	| STRING{
		printf("var_type : STRING\n");
		$$ = add_node("var_type",$1);
	    $$->type = STRING1;
	    }
	| BOOL{
		printf("var_type : BOOL\n");
		$$ = add_node("var_type",$1);
	    $$->type = BOOL1;
	    }
	| FLOAT{
		printf("var_type : FLOAT\n");
		$$ = add_node("var_type",$1);
		$$->type = FLOAT1;
		}
	;

variable: array {
			printf("variable : ARRAY \n");
			$$->type1=ARRAY1;
			$$->name=$1->name;
			$$->dim=$1->dim;
		}
		| ID  {
			printf("variable : ID \n");
			$$->name=$1->name;
			struct variable *temp=find_var(active_func_ptr,&global,$1->name);
			if( temp!=NULL ){
				$$->val=temp->val;
				$$->type = temp->type;
			}
			else{
				$$->type=ERROR;
				printf("ERROR: variable in use is not declared at line no %d\n",yylineno);
				sem_flag=1;
			}
		}
		;

array: ID OPENSQ NUM CLOSESQ{
		printf("array: ID OPENSQ NUM CLOSESQ \n");
		$$->dim=$3->val;
		$$->name=$1->name;
		$$->type1=ARRAY1;
	}
	;

loop : for_loop{printf("loop : for_loop\n");}
	 | while_loop{printf("loop : while_loop\n");}
	 ;

for_loop : FOR OPENPR expr DEL condition DEL expr CLOSEPR OPENBR statement_list CLOSEBR {printf("for_loop\n");}

while_loop : WHILE OPENPR condition CLOSEPR OPENBR statement_list CLOSEBR {printf("while_loop\n");}

ifstmnt : IF OPENPR condition CLOSEPR OPENBR statement_list CLOSEBR ELSE OPENBR statement_list CLOSEBR {printf("ifstmnt\n");}
		| IF condition OPENBR statement_list CLOSEBR {printf("ifstmnt\n");}


expr : ID EQUAL condition {
		printf("expr : ID EQUAL condition\n");
	 	$$ = add_node("expr",$1,$2,$3);
	 	struct variable *temp=find_var(active_func_ptr,&global,$1->name);
		if( temp!=NULL ){
			temp->val=$3->val;
		}
		else{
			$$->type=ERROR;
			printf("variable in use is not declared, error at line no %d\n",yylineno);
			sem_flag=1;
		}
	}
	 | ID EQUAL  arithmatic_op {
	 	$$ = add_node("expr",$1,$2,$3);
        //print_nodes($$);
	 	printf("expr : ID EQUAL  arithmatic_op\n");
	 	/*struct variable *temp=find_var(active_func_ptr,&global,$1->name);
		if( temp!=NULL ){
			temp->val=$3->val;
		}
		else{
			$$->type=ERROR;
			printf("variable in use is not declared, error at line no %d\n",yylineno);
			sem_flag=1;
		}*/
	}
	 ;

condition : arithmatic_op COMPARATOR arithmatic_op {
			printf("condition : arithmatic_op COMPARATOR arithmatic_op\n");
			$$ = add_node("condition",$1,$2,$3);
			if( ($1->type==INT1 || $1->type==FLOAT1) && ($3->type==INT1 || $3->type==FLOAT1) ){
				$$->type = BOOL1;
			}
            else if ($1->type ==BOOL1 && $3->type==BOOL1 && ($2->name=="==" || $2->name=="!=") ) 
        		$$->type = BOOL1;
        	else 
        		$$->type = ERROR;

			if($$->type == ERROR){
				sem_flag=1;
				cout<<"type mismatch at line no: "<<endl;
				printf(" %d\n", yylineno);
			}
			else{
				if( $2->name==">" )
					$$->val =( $1->val > $3->val);
				else if( $2->name==">=" )
					$$->val =( $1->val >= $3->val);
				else if( $2->name=="<" )
					$$->val = ($1->val < $3->val);
				else if( $2->name=="<=" )
					$$->val =( $1->val <= $3->val);
				else if( $2->name=="==" )
					$$->val = ($1->val == $3->val);
				else if( $2->name=="!=" )
					$$->val = ($1->val != $3->val);
			}
			printf("$$->value : %f\n", $$->val);
		}
		| UNARY_OP factor {
			printf("condition : UNARY_OP factor\n");
			$$ = add_node("condition",$1,$2);
			if($2->type!=STRING1){
				if($2->type!=BOOL1){
					if($1->name=="!")
						$$->val=!$2->val;
					else if($1->name=="++"){
						$2->val=$2->val+1;
						$$->val=$2->val;
					}
					else if($1->name=="--"){
						$2->val=$2->val-1;
						$$->val=$2->val;
					}
				}
				else if($1->name == "!")
					$$->val=!$2->val;
				else{
					sem_flag=1;
					cout<<"unsuported operand with bool at line no: "<<yylineno<<endl;
					$$->type=ERROR;
				}
			}
			else{
				sem_flag=1;
				cout<<"unsuported operand with string at line no: "<<yylineno<<endl;
				$$->type=ERROR;
			}
			printf("$$->value : %f\n", $$->val);
		}
		| factor UNARY_OP {
			printf("condition : arithmatic_op UNARY_OP\n");
			$$ = add_node("condition",$1,$2);
				if($1->type!=STRING1){
					if($1->type!=BOOL1){
						if($2->name=="!")
							$$->val=!$1->val;
						else if($2->name=="++"){
							$1->val=$1->val+1;
							$$->val=$1->val;
						}
						else if($2->name=="--"){
							$1->val=$1->val-1;
							$$->val=$1->val;
						}
					}
					else if($2->name == "!")
						$$->val=!$1->val;
					else{
						sem_flag=1;
						cout<<"unsuported operand with bool at line no: "<<yylineno<<endl;
						$$->type=ERROR;
					}
				}
				else{
					sem_flag=1;
					cout<<"unsuported operand with string at line no: "<<yylineno<<endl;
					$$->type=ERROR;
				}
				printf("$$->value : %f\n", $$->val);
		} 
		 ;

arithmatic_op : mul SUM arithmatic_op {
				printf("mul : mul SUM arithmatic_op\n");
			    $$ = add_node("arithmatic_op",$1,$2,$3);
				$$->type=coercible($1->type,$3->type);
				cout<<"types "<<$$->type<<" "<<$1->type<<" "<<$3->type<<endl;
				if($$->type == ERROR){
					sem_flag=1;
					cout<<"type mismatch at yyline no: "<<yylineno<<endl;
				}
				else{
					if( $2->name=="+" )
						$$->val = $1->val + $3->val;
					else
						$$->val = $1->val - $3->val;
				}
				printf("$$->value : %f\n", $$->val);
			}
		    | mul {
		      	printf("arithmatic_op : mul\n");
		      	$$ = add_node("arithmatic_op",$1);
				$$->val = $1->val;
				$$->type = $1->type;
				cout<<"types "<<$$->type<<" "<<$1->type<<endl;
				printf("$$->val: %f\n", $$->val);
        		//print_nodes($$);


		    }
		;

mul : factor MULT mul {
		printf("mul : factor MULT mul\n");
	    $$ = add_node("mul",$1,$2,$3);
		$$->type=coercible($1->type,$3->type);
		cout<<"types "<<$$->type<<" "<<$1->type<<" "<<$3->type<<endl;

		if($$->type == ERROR){
			sem_flag=1;
			cout<<"type mismatch at yyline no: "<<yylineno<<endl;
		}
		else{
			if( $2->name=="*" )
				$$->val = $1->val * $3->val;
			else{
				if($3->val==0){
					sem_flag=1;
					$$->type=ERROR;
					cout<<"error division by 0 at line no: "<<yylineno<<endl;
				}
				else
					$$->val = $1->val / $3->val;
			}
		}
	}

	| factor {
	    $$ = add_node("mul",$1);
		printf("mul : factor\n");
		$$->val = $1->val;
		$$->type = $1->type;
		cout<<"types "<<$$->type<<" "<<$1->type<<endl;
		printf("$$->val: %f\n", $$->val);

		}
	;

factor : ID {
			printf("factor : ID \n");
	    	$$ = add_node("factor",$1);
			struct variable *temp=find_var(active_func_ptr,&global,$1->name);
			if( temp!=NULL ){
				$$->val=temp->val;
				$$->type = temp->type;
			}
			else{
				$$->type=ERROR;
				printf("variable in use is not declared, error at line no %d\n",yylineno);
				sem_flag=1;
			}

		}
	   | OPENPR arithmatic_op OPENPR {
	    	$$ = add_node("factor",$1);
		    printf("factor : OPENPR arithmatic_op OPENPR \n");
		    $$->type = $2->type;
		    $$->val = $2->val;
	  		}
	   | NUM {
		    printf("factor : NUM \n");
	    	$$ = add_node("factor",$1);
		    $$->type = INT1;
			cout<<"types "<<$$->type<<" "<<$1->type<<endl;
		    $$->val=$1->val ;
			cout<<"val "<<$$->val<<" "<<$1->val<<endl;

		    }
	   | FLOAT_CONST {
		    printf("factor : FLOAT_CONST \n");
			$$ = add_node("factor",$1);
		    $$->type = FLOAT1;
		   	$$->val=$1->val ;
	   		}
	   | BOOL_CONST {
		   printf("factor : BOOL_CONST \n");
	       $$ = add_node("factor",$1);
		   $$->val=$1->val ;
		   $$->type = BOOL1;
	  	 }
	  	 | array{
	  	 	printf("factor : ID \n");
	    	$$ = add_node("factor",$1);
			$$->type = $1->type;
			$$->type1 = $1->type1;
		    $$->val = $1->val;
	  	 }
	   ;

%%
int main(){
	active_func_ptr = &global;
    func_table.push_back(global);
    yyparse();
    return 0 ;
    

}