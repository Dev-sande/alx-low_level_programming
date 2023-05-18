#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - function that frees a dlistint_t list
*
* @head: header to list to be freed
* Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}

