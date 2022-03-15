#include <main.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *d = "_putchar";

	while (*d)
	{
		_putchar(*d);
		d++;
	}
	_putchar('\n');

	return (0);
}
