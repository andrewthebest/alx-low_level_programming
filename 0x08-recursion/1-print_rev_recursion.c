#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	if ((size - 1) < 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[size - 1]);
	s[size - 1] = '\0';
	s = s - 1;
	_print_rev_recursion(s);
}
