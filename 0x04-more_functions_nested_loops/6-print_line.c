#include "main.h"

/**
 * print_line - draws line in the terminal
 * @n: size of line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i = 1;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i <= n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
