#include "lists.h"

/**
 * free_planet_list - frees a linked list
 * @mercury_head: planet_list_t list to be freed
 */
void free_planet_list(planet_list_t *mercury_head)
{
	planet_list_t *temp;

	while (mercury_head)
	{
		temp = mercury_head->next;
		free(mercury_head);
		mercury_head = temp;
	}
}

