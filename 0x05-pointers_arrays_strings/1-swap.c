#include "main.h"
/**
 *swap_int - swap numbers function
 *@a: integer
 *@b: integer
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
