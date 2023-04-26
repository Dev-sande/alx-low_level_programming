#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a linked list
 * @strarr: strarr of a list.
 * @n: n element.
 *
 * Return: address of the morr element. NUll if failed.
 */
listint_t *add_nodeint_end(listint_t **strarr, const int n)
{
	listint_t *morr;
	listint_t *temp;

	(void)temp;

	morr = malloc(sizeof(listint_t));

	if (morr == NULL)
		return (NULL);

	morr->n = n;
	morr->next = NULL;
	temp = *strarr;
	if (*strarr == NULL)
	{
		*strarr = morr;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = morr;
	}

	return (*strarr);
}

