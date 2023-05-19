#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the
* node at index index of a dlistint_t linked list.
*
* @head: head of linked list with node to delete
* @index: index of the node to delete
* Return: 1 if succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *node, *prev_node;
unsigned int i;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
node = *head;
*head = node->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}

free(node);
return (1);
}

prev_node = *head;

for (i = 0; i < index - 1 && prev_node != NULL; i++)
{
prev_node = prev_node->next;
}
if (prev_node == NULL || prev_node->next == NULL)
{
return (-1);
}
node = prev_node->next;
prev_node->next = node->next;
if (node->next != NULL)
{
node->next->prev = prev_node;
}
free(node);
return (1);
}

