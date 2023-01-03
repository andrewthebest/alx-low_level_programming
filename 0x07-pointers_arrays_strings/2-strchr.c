#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to work on
 * @c: character to find
 *
 *Return: pointer of char
 */

char *_strchr(char *s, char c)
{
	int i, found;
	char *loc;

	i = 0;
	found = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			loc = &s[i];
			found = 1;
			break;
		}
		i++;
	}
	
	if (found)
		return (loc);
	else
		return (0);
}
