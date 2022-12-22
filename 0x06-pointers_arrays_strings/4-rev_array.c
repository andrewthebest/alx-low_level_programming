#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to work on
 * @n: number of elements of the array
 *
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;
	while (i < (n / 2))
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

		i++;
		j--;
	}
}
