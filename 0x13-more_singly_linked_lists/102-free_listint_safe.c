#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * free_listint_safe - free linked list of integers, sets first element to NULL
 * @h: pointer to pointer to first element of list
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l;
	listint_t *tmp;
	list_ad *address, *check;

	l = 0;
	if (*h == NULL)
		return (l);

	address = NULL;
	while (*h != NULL && !is_in(address, (void *) *h))
	{
		check = add_add(&address, (void *) *h);
/*I cannot free if something goes wrong here, do I care to check */
		if (check == NULL)
		{
			free_add(address);
			exit(98);
		}
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		++l;
	}
	*h = NULL;
	free_add(address);
	return (l);
}

/*look at Justin's solution, links a list on the stack, no call to malloc*/
