#include "ists.h"

/**
 * free_planet_list2 - frees a linked list
 * @head: pointer to the planet_list_t list to be freed
 */
void free_planet_list2(planet_list_t **head)
{
	if (head == NULL || *head == NULL) {
		return;
	}

	planet_list_t *current_node = *head;
	planet_list_t *next_node = NULL;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}

	*head = NULL;
}

