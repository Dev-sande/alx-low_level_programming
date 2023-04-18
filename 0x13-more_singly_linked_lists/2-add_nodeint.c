#include "lists.h"

/**
 * add_beginning_node - adds a new node at the beginning of a linked list
 * @head: pointer to the head node in the list
 * @data: data to be inserted in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
list_node_t *add_beginning_node(list_node_t **head, const int data)
{
	list_node_t *new_node;

	new_node = malloc(sizeof(list_node_t));
	if (!new_node)
		return (NULL);

	new_node->data = data;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

