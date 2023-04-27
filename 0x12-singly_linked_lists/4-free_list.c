#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
