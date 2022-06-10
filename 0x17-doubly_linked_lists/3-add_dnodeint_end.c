#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: pointer to the head pointer of the list
 * @n: data in new node
 * Return: the address of the new element, or NULL if it failed
 * Description: function that adds a new node at the end of a list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	new->prev = *head;
	while (new->prev->next)
	{
		new->prev = new->prev->next;
	}
	new->prev->next = new;
	return (new);
}
