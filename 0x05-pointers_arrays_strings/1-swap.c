#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: address of the first integer
 * @b: address of the second integer
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
