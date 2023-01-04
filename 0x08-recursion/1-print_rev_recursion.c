#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		if (*(s - 1))
		{
			_putchar(*(s - 1));
			*(s - 1) = '\0';
			_print_rev_recursion(s - 1);
		}
		else
			return;
	}
	_print_rev_recursion(s + 1);
}
