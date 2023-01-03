#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 *
 * @dest: pointer dest
 * @src: pointer src
 * @n: number of bytes to fill
 *
 * Return: pointer of char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	return (dest);
}
