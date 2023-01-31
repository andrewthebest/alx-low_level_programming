#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of list to work on
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
