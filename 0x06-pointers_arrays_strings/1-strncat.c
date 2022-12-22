#include "main.h"

/**
 * _strncat - concatenates two strings (n characters)
 * @dest: resulting string
 * @src: source string
 * @n: number of characters to add to 'dest'
 *
 * Return: the new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;

		if (src[j] == '\0')
			break;
	}

	dest[i] = '\0';
	return (dest);
}
