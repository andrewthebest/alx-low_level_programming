#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be add
 * @n: data of the new node
 *
 * Return: address of the new node or NULL if an error occur
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr;
	unsigned int count;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	count = 0;
	new_node->n = n;
	new_node->next = NULL;
	ptr = *head;
	
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (ptr)
	{
		if (count == idx)
		{
			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
