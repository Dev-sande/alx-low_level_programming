#include "lists.h"

/**
 * print_listint - prints all our elements of a singly linked list of integers
 * @k: head of a list.
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *k)
{
	size_t pmd = 0;

	while (k != NULL)
	{
		printf("%d\n", k->n);
		k = k->next;
		pmd++;
	}
	return (pmd);
}

