#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: listint_t to work on
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes;

	nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
