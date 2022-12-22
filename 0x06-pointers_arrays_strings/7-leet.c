#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to work on
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char codes[] = "4433007711";
	int i, j, n;

	i = 0;
	j = 0;
	n = 10;
	while (s[i] != '\0')
	{
		while (j < n)
		{
			if (s[i] == letters[j])
				s[i] = codes[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
