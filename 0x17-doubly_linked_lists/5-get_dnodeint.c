#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head pointer of the list
 * @index: data in new node
 * Return: if the node does not exist, return NULL
 * Description: function that returns the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	p_node = head;
	while (p_node)
	{
		if (i == index)
			return (p_node);
		i++;
		p_node = p_node->next;
	}
	return (NULL);
}
