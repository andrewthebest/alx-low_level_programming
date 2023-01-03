#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: matrix of integers
 * @size: size of matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int diag1, diag2;

	i = 0;
	diag1 = 0;
	diag2 = 0;
	while (i < size)
	{
		diag1 += a[i + (size * i)];
		diag2 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", diag1, diag2);
}
