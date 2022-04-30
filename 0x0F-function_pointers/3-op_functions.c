#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds 2 numbers
 * @a: int number
 * @b: int number
 * Return: a + b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts 2 numbers
 * @a: int number
 * @b: int number
 * Return: a - b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies 2 numbers
 * @a: int number
 * @b: int number
 * Return: a * b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides 2 numbers
 * @a: int number
 * @b: int number
 * Return: a / b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Finds de rest of a division
 * @a: int number
 * @b: int number
 * Return: a % b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a % b);
}
