#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	_putchar(s[0]);
	s = s + 1;

	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
