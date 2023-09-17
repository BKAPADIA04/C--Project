#include <stdio.h>
#include <string.h>
#include "../include/print.h"
#include "../include/variable.h"

void print_variable(char *token)
{
    char *token_variable = strtok(token, " ");
    token_variable = strtok(NULL, " ");
    char *var_name = token_variable;
    int val = get_variable_value(var_name);
    printf("%d\n", val);
}