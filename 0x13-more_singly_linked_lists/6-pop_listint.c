#include "lists.h"

/**
 * pop_listint - deletes the head node of of a linked list
 * @head: head of a list.
 *
 * Return: The data of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curre;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curre->n;

	h = curre->next;

	free(curre);

	*head = h;

	return (hnode);
}
