#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lg = n % 10;
	if (lg > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lg);
	}

	else if (lg == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lg);
	}
	else if (lg < 6 && lg != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lg);
	}
	return (0);
}
