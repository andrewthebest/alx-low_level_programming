#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: head of list
 *
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
