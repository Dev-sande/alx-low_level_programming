#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
    
	for (; h != NULL; h = h->next)
	{
		nodes++;
		printf("%d\n", h->n);
	}

	return (nodes);
}

