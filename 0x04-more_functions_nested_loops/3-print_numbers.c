#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
 */

void print_numbers(void)
{
	int numbers;

	numbers = 0;
	while (numbers < 10)
	{
		_putchar(numbers + '0');
		numbers++;
	}
	_putchar('\n');
}
