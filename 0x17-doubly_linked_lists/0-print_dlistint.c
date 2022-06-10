#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: nodo
 * Return: the number of nodes
 * Description: function that prints all the elements of a dlistint_t list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;/*size_t para numeros >= 0*/

	while (h != NULL)
	{
		printf("%d\n", h->n);/*imprima el valor de n*/
		cont++;
		h = h->next;/*apunte al siguiente nodo*/
	}
	return (cont);
}
