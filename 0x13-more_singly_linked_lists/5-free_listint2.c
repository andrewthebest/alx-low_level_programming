#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of list to work on
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		current = ptr;
		ptr = ptr->next;
		free(current);
	}
	head = NULL;
}
