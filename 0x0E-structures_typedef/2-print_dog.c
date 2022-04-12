#include <stdio.h>
#include "dog.h"

/**
 * print_dog - This fuction prints the dog's strcture values
 * @d: pointer to the structure
 * Return: nothing
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->name != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
