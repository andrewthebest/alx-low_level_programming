#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a listint
 * @head: the head of the listint
 * @n: data of the new node
 *
 * Return: address of the new node or NULL if an error occur
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptr;

	new_node = malloc(sizeof(listint_t));
	ptr = *head;
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}

	return (new_node);
}
