#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* dlistint_len - return the number of elements in a dlistint
*
* @h: pointer to header of linked list
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
const dlistint_t *current = h;

while (current != NULL)
{
i++;
current = current->next;
}
return (i);
}
