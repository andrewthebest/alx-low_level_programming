#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initializes it with a char
 * @size: size of array
 * @c: char to put on array
 *
 * Return: pointer to char of NULL
 */

char *create_array(unsigned int size, char c)
{
	void *ptr;

	ptr = malloc(sizeof(c) * size);

	if ((ptr == NULL) || (size == 0))
		return (NULL);

	return (ptr);
}
