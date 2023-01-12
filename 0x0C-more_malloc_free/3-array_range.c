#include "main.h"
#include <stdlib.h>

/**
 * array_range - create and returns an array of integers
 * @min: first element of the array
 * @max: last element of the array
 *
 * Return: an array of integers or NULL
 */

int *array_range(int min, int max)
{
	int *ptr, i, len, data;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	i = 0;
	data = min;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = data;
		data++;
		i++;
	}

	return (ptr);
}
