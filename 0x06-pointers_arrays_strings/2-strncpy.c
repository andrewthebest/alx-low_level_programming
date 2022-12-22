#include "main.h"

/**
 * _strncpy - copies a string (n characters)
 * @dest: String where the new chars will be pasted
 * @src:string where the chars will be copied
 * @n: number of chars to copy
 * Return: New string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
