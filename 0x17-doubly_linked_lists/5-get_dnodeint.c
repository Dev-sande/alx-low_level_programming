#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* get_dnodeint_at_index - returns the
* nth node of a dlistint_t linked list
*
* @head: head of the list
* @index: index of the nth node
* Return: nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
unsigned int count = 0;

if (head == NULL)
return (NULL);

current = head;

while (current != NULL)
{
if (count == index)
return (current);

current = current->next;
count++;
}

return (NULL);
}

