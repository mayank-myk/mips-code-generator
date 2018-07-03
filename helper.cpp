#include "struct.h"
#include <bits/stdc++.h>

using namespace std;

node *terminal_node(string name, string value, val_type type=NONE,var_type type1=SIMPLE){
    node *new_node;
    new_node = new node();
 
    new_node->node_name=name;
    new_node->name=value;
    new_node->type=type;
    new_node->type1=type1;

    if(name.compare("NUM") == 0) {
        new_node->val = atoi(value.c_str());
    }
    else if(name.compare("FLOAT_CONST") == 0) {
        new_node->val = atof(value.c_str());
    }
    else if(name.compare("STRING_COST") == 0) {
        new_node->val1 = value;
    }
    else if(name.compare("BOOL_CONST") == 0) {
        if(value.compare("true") == 0)
            new_node->val = 1;
        else
            new_node->val = 0;
    }
    else if(name.compare("ARRAY") == 0) {
        new_node->type1=ARRAY1;

    }

    return new_node;
}
