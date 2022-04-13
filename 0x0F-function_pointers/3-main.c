#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: amount of variables received
 * @argv: pointer to an array of char received
 * Return: 0 is ok, 98, 99, 100 it fails
*/

int main(int argc, char *argv[])
{
	int a, b;
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = get_op_func(argv[2]);

	if (result == NULL)
	{
		printf("%s\n", "Error");
		exit(99);
	}

	printf("%d\n", result(a, b));

	return (0);
}
