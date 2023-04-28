#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a list_t list
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
