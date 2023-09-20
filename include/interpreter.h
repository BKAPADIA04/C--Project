#ifndef INTERPRETER_H
#define INTERPRETER_H

typedef struct data
{
    char *var_name;
    int *value;
}entry;

extern entry data[1000];
void execute_c_minus_minus(char *code);

#endif /* INTERPRETER_H */
