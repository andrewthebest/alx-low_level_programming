#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to print between strings
 * @n: number of integers passed to the function
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	if (n == 0)
		return;

	i = 0;
	va_start(params, separator);
	while (i < n)
	{
		if ((i == 0 && separator) || (separator == NULL))
			printf("%s", va_arg(params, char*));
		else if (va_arg(params, char*) == NULL)
			printf("%snil", separator);
		else
			printf("%s%s", separator, va_arg(params, char*));
		i++;
	}
	va_end(params);
	printf("\n");
}
