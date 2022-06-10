#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * @head: pointer to the head pointer of the list
 * Return: if the list is empty, return 0
 * Description: returns the sum of all the data (n) of a dlistint_t
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p_node = head;
	int sum = 0;

	if (head == NULL)/*si el doble puntero es NULL, no hay nada*/
		return (0);
	while (p_node)
	{
		sum = sum + p_node->n;
		p_node = p_node->next;/*head ahora apunta al siguiente nodo*/
	}
	return (sum);
}
