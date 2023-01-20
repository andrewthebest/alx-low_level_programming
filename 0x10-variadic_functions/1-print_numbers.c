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

	if (n == 0 || separator == NULL)
		return;

	i = 0;
	va_start(params, n);
	while (i < n)
	{
		printf("%d", va_arg(params, int));
		if (i == (n - 1))
			printf("\n");
		else
		{
			if (separator != NULL)
				printf("%s", separator);
		}

		i++;
	}
	va_end(params);
}
