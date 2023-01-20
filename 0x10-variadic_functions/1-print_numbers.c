#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	if (n == 0)
		return;

	i = 0;
	va_start(params, n);
	while (i < n)
	{
		if ((i == 0 && separator) || (separator == NULL))
			printf("%d", va_arg(params, int));
		else
			printf("%s%d", separator, va_arg(params, int));
		i++;
	}
	va_end(params);
	printf("\n");
}
