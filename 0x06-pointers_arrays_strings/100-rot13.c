#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to work on
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotate[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j, n;

	i = 0;
	j = 0;
	n = 52;
	while (s[i] != '\0')
	{
		while (j < n)
		{
			if (s[i] == letters[j])
			{
				s[i] = rotate[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
