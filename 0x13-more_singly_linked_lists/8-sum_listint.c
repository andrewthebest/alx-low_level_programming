#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of
 * a listint_t list
 * @head: head of the linked list
 *
 * Return: the sum of all the data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;

	sum = 0;
	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
