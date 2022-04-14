
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - prints strings, followed by a new line.
* @separator: string to be printed between the strings
* @n: number of strings passed to the funciton.
* @... : variadic parameters
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list strings;
char *str;

va_start(strings, n);

for (i = 0; i < n; i++)
{
str = va_arg(strings, char *);

if (str == NULL)
printf("(nil)");

printf("%s", str);

if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(strings);
}
