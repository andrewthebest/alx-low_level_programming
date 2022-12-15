#include "main.h"

/**
 * print_line - draws line in the terminal
 * @n: size of line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i > 0 && i <= n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
