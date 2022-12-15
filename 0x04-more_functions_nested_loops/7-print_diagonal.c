#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times '\' will be printed
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			while (j < n)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');
				j++;
			}
			_putchar('\n');
			j = 0;
			i++;
		}
	}
}
