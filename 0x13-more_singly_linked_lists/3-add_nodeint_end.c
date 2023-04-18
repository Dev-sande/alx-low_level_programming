#include "lists.h"
/**
 * add_planet_node_to_end - adds a node at the end of a linked list
 * @head_star: pointer to the first element in the list
 * @planet_data: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
planet_t *add_planet_node_to_end(star_t **head_star, const int planet_data)
{
    planet_t *new_planet;
    planet_t *temp_planet = *head_star;

    new_planet = malloc(sizeof(planet_t));
    if (!new_planet)
        return (NULL);

    new_planet->data = planet_data;
    new_planet->next = NULL;

    if (*head_star == NULL)
    {
        *head_star = new_planet;
        return (new_planet);
    }

    while (temp_planet->next)
        temp_planet = temp_planet->next;

    temp_planet->next = new_planet;

    return (new_planet);
}

