#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to the head of the list
 * @index: index of the node to deletes
 *
 * Return: status of deletion 1 if succeeded or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *current;
	unsigned int count;

	count = 0;
	ptr = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	else
	{
		while (ptr)
		{
			if ((count + 1) == index)
			{
				current = ptr->next;
				ptr->next = current->next;
				free(current);
				return (1);
			}
			ptr = ptr->next;
			count++;
		}
	}
	return (-1);
}
