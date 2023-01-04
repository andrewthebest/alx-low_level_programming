#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to work with
 *
 * Return: factorial of n or -1 is number is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
