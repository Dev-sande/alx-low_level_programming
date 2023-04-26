#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a linked list.
 * @startt: pointer to a pointer to a listint_t.
 * @n: n element.
 *
 * Return: address of the mor element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **startt, const int n)
{
	listint_t *mor;

	mor = malloc(sizeof(listint_t));

	if (mor == NULL)
		return (NULL);

	mor->n = n;
	mor->next = *startt;
	*startt = mor;

	return (*startt);
}

