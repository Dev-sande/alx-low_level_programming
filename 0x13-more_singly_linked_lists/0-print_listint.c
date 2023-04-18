#include "lists.h"

/**
 * print_list_integers - prints all the integers of a linked list
 * @head: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_list_integers(const listint_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		node_count++;
		head = head->next;
	}

	return (node_count);
}

