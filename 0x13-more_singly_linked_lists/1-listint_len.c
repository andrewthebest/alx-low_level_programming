#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: listint_t to work on
 *
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int elements;

	elements = 0;
	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
