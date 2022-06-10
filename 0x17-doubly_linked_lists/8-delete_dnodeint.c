#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: pointer to the head pointer of the list
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 * Description: function that deletes the node at index index of a list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	del = *head;
	if (index == 0)
	{
		if (del->next)
		{
			*head = del->next;
			del->next->prev = NULL;
		}
		else
		{
			*head = NULL;
			return (1);
		}
	}
	else
	{
		while (i < index)
		{
			i++;
			if ((del->next == NULL) && (i != (index - 2)))
				return (-1);
			del = del->next;
		}
		del->prev->next = del->next;
		if (del->next)
			del->next->prev = del->prev;
		else
			del->prev->next = NULL;
	}
	free(del);
	return (1);
}
