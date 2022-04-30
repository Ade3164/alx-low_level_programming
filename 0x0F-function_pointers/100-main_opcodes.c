#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: amount of args get
 * @argv: pointer to an array of arguments
 * Return: if fails 1 - 2, else 0
*/

int main(int argc, char *argv[])
{
	int by, i;
	char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcode = (char *)main;

	for (i = 0; i < by; i++)
	{
		if (i < by - 1)
			printf("%.2hhx ", opcode[i]);
		else
			printf("%.2hhx", opcode[i]);
	}
	printf("\n");

	return (0);
}
