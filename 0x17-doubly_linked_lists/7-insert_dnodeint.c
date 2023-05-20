#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: A pointer to the head of the doubly linked list.
* @idx: The index where the new node should be added.
* @n: The data value of the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current_node;
unsigned int i;

if (h == NULL)
return (NULL);

/* Create a new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

/* Insert at the beginning */
if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

/* Traverse to the desired position */
current_node = *h;
for (i = 0; i < idx - 1 && current_node != NULL; i++)
current_node = current_node->next;

/* If index is out of bounds */
if (current_node == NULL)
{
free(new_node);
return (NULL);
}

/* Insert at the end */
if (current_node->next == NULL)
{
new_node->prev = current_node;
new_node->next = NULL;
current_node->next = new_node;
return (new_node);
}

/* Insert in the middle */
new_node->prev = current_node;
new_node->next = current_node->next;
current_node->next->prev = new_node;
current_node->next = new_node;

return (new_node);
}
