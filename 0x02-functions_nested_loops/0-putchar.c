#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * main - Entry point
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{

char ermias[] = "_putchar";
int c;
for (c = 0; c < 8; c++)

{
_putchar(ermias[c]);
}
_putchar('\n');

return (0);
}

