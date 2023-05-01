#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: resulting sum.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
