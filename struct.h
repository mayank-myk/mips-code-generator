#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>

using namespace std;

enum val_type { INT1, FLOAT1, STRING1, BOOL1, NONE, ERROR };
enum var_type { SIMPLE , ARRAY1};

struct variable{

   string name;
   val_type type;
   var_type ele_type;
   int dim;
   int level;
   int offset;
   float val=0;

   variable() {};

   variable(string name1 ,val_type type1 ,var_type ele_type1 ,int level1 ){
       name = name1;
       type = type1;
       ele_type = ele_type1;
       level = level1;

   }
};

struct function_struct{
    string name;
    val_type return_type;
    vector<variable> params;
    vector<variable> local_var;

    function_struct(){};
    function_struct(string name1 ,val_type return_type1){
        name = name1;
        return_type = return_type1;
    }

};

struct node{
    string node_name;
    node* children[10];

    string name;
    int line_no;
    int node_no;
    float val;
    int dim;
    string val1;
    val_type type;
    var_type type1;
    string code;
};
