#include "struct.h"
#include <bits/stdc++.h>

using namespace std;

node* add_node(string name, node* a=NULL, node* b=NULL, node* c=NULL, node* d=NULL, node* e=NULL, node* f=NULL, node* g=NULL, node* h=NULL, node* i=NULL, val_type type= NONE, int val=0) {
        static int no = 1;
        
        node *new_node;
        new_node = new node();
        new_node->children[0] = a;
        new_node->children[1] = b;
        new_node->children[2] = c;
        new_node->children[3] = d;
        new_node->children[4] = e;
        new_node->children[5] = f;
        new_node->children[6] = g;
        new_node->children[7] = h;
        new_node->children[8] = i;
        new_node->children[9] = NULL;
        new_node->node_name=name;
        new_node->name;
        new_node->node_no = no * 10;
        new_node->type=type;
        new_node->val=val;

        return new_node;
}

val_type coercible(val_type expr1,val_type expr2){
        if(expr1==INT1 && expr2==INT1)
                return INT1;
        else if( (expr1==INT1 && expr2==FLOAT1) || (expr2==INT1 && expr1==FLOAT1) || (expr2==FLOAT1 && expr1==FLOAT1) )
                return FLOAT1;
        else 
            return ERROR;
}

// val_type comparable(val_type expr1,val_type expr2){
//         if( (expr1==INT1 || expr1==FLOAT1) && (expr2==INT1 || expr2==FLOAT1)){
//              return BOOL1;
//         }
//             else{
//                 sem_flag=1;
//                 cout<<"unsuported operand with string at line no: "<<yylineno<<endl;
//                 $$->type=ERROR;
//             }
// }

// void print_local_var(function *active_func_ptr)
// {
//         vector<variable>:: iterator it;
//         for(it = active_func_ptr->local_var.begin() ; it != active_func_ptr->local_var.end(); ++it)
//         {
//                 cout << it->name << " " << it->type << "  " << it->ele_type  <<"\n";
//         }
// }

void print_nodes(struct node* root)
{
        if(root == NULL)
                return;
        else
        {
                cout << "Parent node " << root->node_no << "( " << root->node_name << " ) : ";
                 // myfile << "Parent node " << root->node_no << "( " << root->node_name << " ) : ";
                if(root->children[0] == NULL)
                {
                        cout << root->name;
                        // myfile << root->name;
                }
                for(int i=0 ; i<10 ; i++)
                {
                        if(root->children[i] != NULL)
                        {
                                cout << root->children[i]->node_no << " (" << root->children[i]->node_name << ") ";
                                 // myfile << root->children[i]->node_no << " (" << root->children[i]->node_name << ") ";
                        }
                        else
                        {
                                cout << "\n";
                                // myfile << "\n";
                                break;
                        }
                }
                for(int i=0;i<10; i++)
                {
                        if(root->children[i] != NULL)
                        {
                                print_nodes(root->children[i]);
                                //break;
                        }
                }
        }

}





// int check_varlist(vector<variable> var_list, vector<function> func_table, int level,string name1)
// {

//         vector<variable>:: iterator it;
//         for(it = var_list.begin() ; it != var_list.end(); ++it)
//         {
//                 if(it->name == name1)
//                 {
//                         return 0;
//                 }
//         }
//         for (size_t i = 0; i < func_table.size(); i++) {
//             if(func_table[i].name == name1)
//                     return 0;
//         }
//         return 1;
// }

int check_func_varlist(function_struct *current,string var_name){
     vector<variable> var_list = current->local_var;
     vector<variable> param_list = current->params;
     for(int i=0; i < param_list.size();i++){
        if(param_list[i].name == var_name)
        return 0;
     }

     for( int i=0;i< var_list.size(); i++){
        if(var_list[i].name == var_name ){
                    return 0;
             }
        }
    return 1 ;
}

struct variable *find_var(function_struct *current,function_struct *global,string var_name){
     vector<variable> var_list = current->local_var;
     vector<variable> param_list = current->params;
     for(int i=0; i < param_list.size();i++){
        if(param_list[i].name == var_name)
            return &param_list[i];
     }

     for( int i=0;i< var_list.size(); i++){
        if(var_list[i].name == var_name ){
            return &var_list[i];
        }
    }
     var_list = global->local_var;
     for( int i=0;i< var_list.size(); i++){
        if(var_list[i].name == var_name ){
           return &var_list[i];
        }
    }
    return NULL ;
}


// int check_all_varlist(function *current, int level, string var_name, vector<variable> global_var_table)
// {

// }

int check_func_name(vector<function_struct> func_list, string name){
    for(int i=0;i< func_list.size() ; i++){
            if( func_list[i].name == name)
                    return 0;
    }
    return 1;
}

function_struct * find_function(vector<function_struct> func_list, string name){
	for(int i=0;i< func_list.size() ; i++){
            if( func_list[i].name == name)
                    return &func_list[i];
    }
    return NULL;
}



void print_func_varlist(function_struct *current){
     
     vector<variable> variable_list = current->local_var;
     vector<variable> param_list = current->params;
     for(int i=0; i < param_list.size();i++){
     	cout<<"Parameter "<<i<<" is "<<param_list[i].name<< " type "<<param_list[i].type<<endl;
     }

     for( int i=0;i< variable_list.size(); i++){
     	cout<<"Variable "<<i<<" is "<<variable_list[i].name<< " type "<<variable_list[i].type<<endl;
    }
}

void print_func(vector<function_struct> func_list){
        vector<function_struct>:: iterator it;
        for(it = func_list.begin() ; it != func_list.end(); ++it){
                cout << it->name << " " << it->return_type << "\n";
                vector<variable> variable_list = it->local_var;
                vector<variable> param_list = it->params;
                for( int i=0;i< variable_list.size(); i++){
					cout<<"Variable "<<i<<" is "<<variable_list[i].name<< " type "<<variable_list[i].type<<endl;                }
                for( int i=0;i< param_list.size(); i++){
                    cout<<"Parameter "<<i<<" is "<<param_list[i].name<< " type "<<param_list[i].type<<endl;
                }
        }
}



// function get_func(vector<function> func_table, string name)
// {
//     for(int i=0;i< func_table.size() ; i++)
//     {
//             if(func_table[i].name == name)
//                     return func_table[i];
//     }
// }

// int match_args(function callee, vector<val_type> args_list)
// {
//     int res = 1;
//     if(callee.params.size() == args_list.size())
//     {
//             for(int i=0; i< args_list.size();i++)
//             {
//                     if(callee.params[i].ele_type != args_list[i])
//                     {
//                             res = 0;
//                     }

//             }
//     }
//     else
//     {
//             res = 0;
//     }
//     return res;
// }

// // int search_func
// int check_declared(function *active_func_ptr ,vector<variable> var_list ,int level,string name1)
// {
//         for(int i=level; i >=0 ;i--)
//         {
//                 if(!check_func_varlist(active_func_ptr,i,name1))
//                         return 1;
//         }

//          vector<variable>:: iterator it;
//         for(it = var_list.begin() ; it != var_list.end(); ++it)
//         {
//                 if(it->name == name1)
//                 {
//                         return 1;
//                 }
//         }
//         return 0;
// }

// variable retrieve_declared(function *active_func_ptr ,vector<variable> var_list ,int level,string name1)
// {
//         vector<variable> func_var_list = active_func_ptr->local_var;
//         vector<variable> param_list = active_func_ptr->params;
//         for(int i=level; i > 1 ;i--)
//         {
//             for( int j=0;j< func_var_list.size(); j++)
//             {
//                 if(func_var_list[j].name == name1 && func_var_list[j].level == i){
//                        return func_var_list[j];
//                 }
//            }
//         }
//         for(int i=0; i < param_list.size();i++)
//         {
//                 if(param_list[i].name == name1)
//                         return param_list[i];
//         }

//          vector<variable>:: iterator it;
//         for(it = var_list.begin() ; it != var_list.end(); ++it)
//         {
//                 if(it->name == name1)
//                 {
//                         return *it;
//                 }
//         }
// }

// void clear_vars(function *active_func_ptr, int level)
// {
//         for( int j=0;j< active_func_ptr->local_var.size(); j++)
//         {
//             if(active_func_ptr->local_var[j].level == level){
//                    (active_func_ptr->local_var).erase(active_func_ptr->local_var.begin() + j);
//             }
//        }
// }



// void print_symbol(vector<variable> var_list)
// {
//         vector<variable>:: iterator it;
//         for(it = var_list.begin() ; it != var_list.end(); ++it)
//         {
//                 cout << it->name << " " << it->type << "  " << it->ele_type  <<"\n";
//         }

// }



// string generate_final_code(string text,vector<variable> global_vars)
// {
//         string code = ".data\n";
//         vector<variable>:: iterator it;
//         for(it = global_vars.begin() ; it != global_vars.end(); ++it)
//         {
//                 code = code + (*it).name + ": .word 0\n";
//         }
//         code = code + ".text\n" + text;
//         return code;
// }


// int check_dimension(variable var1,vector<variable> patch_list, int lineno)
// {
//         if(patch_list[patch_list.size()-1].dim_ptr.size() == var1.dim_ptr.size() )
//         {
//             int res = 1;
//             for(int i=0;i< var1.dim_ptr.size() ;i++)
//             {
//                 if(patch_list[patch_list.size()-1].dim_ptr[i] >= var1.dim_ptr[i])
//                 {
//                     res=0;
//                 }
//             }
//             if(res == 1)
//             {
//                 return 1;
//             }
//             else
//             {
//                  printf("Indices are out of bound at line %d.\n",lineno);
//                  return 0;
//             }
//         }
//         else
//         {
//             printf("Dimension mismatch at line %d.\n",lineno);
//             return 0;
//         }

// }

// int cal_arr_offset(variable patch_k,variable m)
// {
//         int offset = 0;
//         if(m.dim_ptr.size() > 0)
//         {
//                 int i;
//                 for(i=0; i < m.dim_ptr.size()-1; i++)
//                 {
//                         offset = offset + patch_k.dim_ptr[i]*m.dim_ptr[i+1];
//                 }

//                 offset += patch_k.dim_ptr[i];
//         }
//         return -(offset*4);

// }