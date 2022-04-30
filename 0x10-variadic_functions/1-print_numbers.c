
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to function
* @... : variable number of parameters to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i;

va_start(nums, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(nums, int));

if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(nums);
}
