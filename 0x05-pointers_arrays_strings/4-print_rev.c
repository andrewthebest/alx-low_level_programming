#include "main.h"

/**
 * print_rev - prints a string in reverse way
 * @s: string to be printed
 *
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
