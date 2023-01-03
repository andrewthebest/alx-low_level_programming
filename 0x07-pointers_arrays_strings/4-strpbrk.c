#include "main.h"

/**
 * _strpbrk - searches a string for any of set of bytes
 * @s: initial string
 * @accept: accepted pattern
 *
 * Return: pointer of char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *tmp;
	int found;

	i = 0;
	j = 0;
	found = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				tmp = &s[i];
				found = 1;
				break;
			}
			j++;
		}

		if (found)
			break;
		i++;
		j = 0;
	}

	if (found)
		return (tmp);
	else
		return (0);
}
