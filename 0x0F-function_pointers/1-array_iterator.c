#include "function_pointers.h"
/**
* array_iterator - function
* @array: integer array to iterate
* @size: size of integer array
* @action: pnt to array_iterator func
*
* Description: function to execute a function given a parameter elem array
* Return: 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[size] = array[i];
			action(array[size]);
		}
	}
}
