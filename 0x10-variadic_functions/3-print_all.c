/*
* Author: Adrian Kiplimo Kipkorir
*/

#include "variadic_functions.h"
#include <stdio.h>

/**
* print_char - prints a character
* @arg: list of arguments pointing to
*       the character to be printed
*/
void print_char(va_list arg)
{
char letter;
letter = va_arg(arg, int);
printf("%c", letter);
}

/**
* print_integer - prints an integer
* @arg: list of arguments pointing to
*       the character to be printed
*/
void print_integer(va_list arg)
{
int num;
num = va_arg(arg, int);
printf("%d", num);
}

/**
* print_float - prints a float
* @arg: list of arguments pointing to
*      the float to be printed
*/
void print_float(va_list arg)
{
float num;
num = va_arg(arg, double);
printf("%f", num);
}

/**
* print_string - prints a string
* @arg: list of arguments pointing to
*      the string to be printed
*/
void print_string(va_list arg)
{
char *str;

str = va_arg(arg, char*);

if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);

}

/**
* print_all - function that prints anything
* @format: list of all types of arguments passed
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0;
char *separator = "";
printer_t funcs[] = {
{"c", print_char},
{"i", print_integer},
{"f", print_float},
{"s", print_string}
};

va_start(args, format);

while (format && (*(format + i)))
{
j = 0;

while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
j++;

if (j < 4)
{
printf("%s", separator);
funcs[j].print(args);
separator = ", ";
}

i++;
}

printf("\n");

va_end(args);
}
