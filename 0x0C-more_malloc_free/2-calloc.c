#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocate memory and initalize space to zero
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer to memory space, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *space;
	int *memset;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	memset = space;
	for (i = 0 ; i < nmemb; i++)
	{
		*(memset + (i * size)) = 0;
	}

	return (space);
}
