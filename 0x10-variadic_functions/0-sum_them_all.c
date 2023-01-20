#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its params
 * @n: number of args to compute the sum
 *
 * Return: the sum of params or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list params;

	if (n == 0)
		return (0);

	i = 0;
	sum = 0;
	va_start(params, n);
	while (i < n)
	{
		sum += va_arg(params, int);
		i++;
	}
	va_end(params);

	return (sum);

}
