#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * is_in - checks if an address is in a linked list of pointers
 * @add: a linked list of addresses
 * @p: a pointer
 * Return: 1 if true, 0 if false
 */
int is_in(list_ad *add, void *p)
{
	if (add == NULL)
		return (0);
	if (p == NULL)
		return (0);

	while (add != NULL)
	{
		if (add->p == p)
			return (1);
		add = add->next;
	}
	return (0);
}

/**
 * add_add - adds an address to a linked list
 * @head: a pointer to a linked list of addresses
 * @p: an address
 * Return: pointer to head of list
 */
list_ad *add_add(list_ad **head, void *p)
{
	list_ad *new;

	new = malloc(sizeof(list_ad));
	if (new == NULL)
		return (NULL);
	new->p = p;
	new->next = *head;
	*head = new;
	return (*head);
}


/**
 * free_add - free a linked list of pointers
 * @head: pointer to list
 *
 */
void free_add(list_ad *head)
{
	list_ad *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}


/**
 * print_listint_safe - prints a linked list with a loop
 * @head: pointer to first element
 * loop only once through list
 * Return: size of linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	int keep;
	size_t l;
	list_ad *address, *check;

	l = 0;
	if (head == NULL)
		return (l);

/*create a linked list holding the address of each node*/
	address = NULL;
/*use keep not to recalculate is_in() after loop*/
	keep = 0;
	while (head != NULL && !keep)
	{
		printf("[%p] %d\n", (void *) head, head->n);

/*use check to catch a NULL return, if the function did not work*/
		check = add_add(&address, (void *) head);
		if (check == NULL)
		{
			free_add(address);
			exit(98);
		}
		head = head->next;
/*add node address to linked list*/
		keep = is_in(address, (void *) head);
		++l;
	}
	if (keep)
		printf("-> [%p] %d\n", (void *) head, head->n);
	free_add(address);
	return (l);
}
