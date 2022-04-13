#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user
 * @s: pointer to a char that operator
 * passed as argument to the program the name
 * of the operation
 * Return: a pointer to the function that corresponds
 * to the operator given as a parameter
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	int i = 0;

	while (i < 5)
	{
		if (ops[i].operator[0] == s[0])
			return ((*ops[i].proto));
		i++;
	}

	return (NULL);
}
