#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head pointer of the list
 * @idx: index of the list where the new node should be added
 * @n: n-node
 * Return: the address of the new node, or NULL if it failed
 * Description: inserts a new node at a given position
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int node = 0;
	dlistint_t *prev, *new;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint_end(h, n));
	if (*h == NULL)
		return (NULL);
	prev = *h;
	for (node = 0; node < idx - 1; node++)
	{
		if (prev == NULL)
		{
			return (NULL);
		}
		prev = prev->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = prev->next;
	prev->next->prev = new;
	prev->next = new;
	return (new);
}
