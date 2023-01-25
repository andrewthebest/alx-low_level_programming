#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char *space;
	int i;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		space = "";
		if (format[i + 1])
			space = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), space);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), space);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), space);
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str || !*str)
					str = "(nil)";
				printf("%s%s", str, space);
				break;
		}
		i++;
	}
	printf("\n");
}
