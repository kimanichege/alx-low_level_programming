#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list to be printed.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		node_count++;
		h = h->next;
	}

	return (node_count);
}
