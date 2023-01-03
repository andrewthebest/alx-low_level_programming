#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer of char
 * @b: constant byte to fill
 * @n: number of bytes to fill
 *
 * Return: pointer of char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
