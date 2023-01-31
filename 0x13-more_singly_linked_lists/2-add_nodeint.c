#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listint
 * @head: the head of the listint
 * @n: data of the new node
 *
 * Return: address of the new node or NULL if an error occur
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (*head);
}
