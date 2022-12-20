#include "main.h"

/**
 * strcpy - copies a string to a buffer
 * @dest: buffer
 * @src: string to copy
 *
 * Return: pointer of char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';;

	return (dest);
}
