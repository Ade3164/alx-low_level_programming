#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to the head pointer of the list
 * Return: the address of the new element, or NULL if it failed
 * Description: function that frees a dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
