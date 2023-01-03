#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial string
 * @accept: accepted pattern
 *
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, check, count;

	count = 0;
	check = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		check = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				check = 1;
			}
			j++;
		}
		i++;
		j = 0;

		if (check == 0)
			break;
	}

	if (check == 1)
		return (0);
	else
		return (count);
}
