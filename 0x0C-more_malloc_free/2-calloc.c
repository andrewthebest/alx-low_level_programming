#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of memory to allocate
 * @size: size of each memory
 *
 * Return: pointer to an array or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, (nmemb * size));

	return (ptr);
}

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
