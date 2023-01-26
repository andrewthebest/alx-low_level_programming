#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

unsigned int _strlen(char *str);

/**
 * print_list - print all the elements of a list
 * @h: list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	unsigned int i;

	current = h;
	i = 0;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", _strlen(current->str), current->str);
		}
		current = current->next;
		i++;
	}
	return (i);
}


/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
