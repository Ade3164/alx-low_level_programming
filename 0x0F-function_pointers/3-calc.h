#ifndef CALC_H
#define CALC_H

/**
 * struct op -  Is the structure of operations
 * @operator: operator
 * @proto: operation prototype
 */
typedef struct op
{
	char *operator;
	int (*proto)(int, int);
} op_t;

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
