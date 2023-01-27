#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer of list_t
 * @str: string of new element
 *
 * Return: the address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int newlen;

	newlen = 0;
	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->next = *head;

	while (str[newlen])
		newlen++;

	newnode->len = newlen;
	*head = newnode;

	return (*head);
}
