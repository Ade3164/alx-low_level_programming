#include "function_pointers.h"
/**
* int_index - function
* @array: array of integers to search
* @size: size of array
* @cmp: ptr to function int_index
*
* Description: function to search for an integer in an array
* Return: -1 if does not match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
