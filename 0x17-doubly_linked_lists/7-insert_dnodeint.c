#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * createNode - Creates a new node for the doubly linked list
 * @n: The value to be stored in the new node
 *
 * Return: Pointer to the newly created node
 */
dlistint_t *createNode(int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		printf("Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	return (newNode);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * doubly linked list
 * @h: Address of the head of the doubly linked list
 * @idx: Index at which the new node should be inserted
 * @n: Value to be stored in the new node
 *
 * Return: Pointer to the newly inserted node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		return (NULL);

	dlistint_t *current = *h;
	unsigned int i = 0;
	dlistint_t *newNode = createNode(n);

	if (newNode == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}

	while (i < idx - 1)
	{
		if (current == NULL)
		{
			free(newNode);
			return (NULL);
		}
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	newNode->prev = current;
	if (current->next != NULL)
		current->next->prev = newNode;
	current->next = newNode;

	return (newNode);
}

