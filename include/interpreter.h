#ifndef INTERPRETER_H
#define INTERPRETER_H

struct data
{
    char *var_name;
    int *value;
};

extern struct data s[1000];
void execute_c_minus_minus(char *code);

#endif /* INTERPRETER_H */
