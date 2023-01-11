#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: width of array
 *@height: height of array
 *
 * Return: pointer to a 2 dimensional array or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * width);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (i < width)
	{
		ptr[i] = malloc(sizeof(int) * height);
		if (ptr[i] == NULL)
			return (NULL);
		while (j < height)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (ptr);
}
