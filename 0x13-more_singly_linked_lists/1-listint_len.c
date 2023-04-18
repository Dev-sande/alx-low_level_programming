#include "lists.h"
/**
 * count_listint_nodes - returns the number of elements in a linked lists
 * @head: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t count_listint_nodes(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}

