#include "lists.h"

/**
 * listint_len - calculates the length of a singly linked list of integers.
 * @k: kead of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *k)
{
	size_t tinr = 0;

	while (k != NULL)
	{
		k = k->next;
		tinr++;
	}
	return (tinr);
}

