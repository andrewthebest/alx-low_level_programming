#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: the data of deleted node or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
		return (0);

	ptr = *head;
	data = ptr->n;
	*head = ptr->next;

	return (data);
}
