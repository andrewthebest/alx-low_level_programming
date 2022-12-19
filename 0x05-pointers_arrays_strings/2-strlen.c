#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to work on
 *
 * Return: Length of 's'
 */

int _strlen(char *s)
{
	int count, i;
	
	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
