#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 *
 * Return: Nothing
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			while (j < n)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			j = 0;
			i++;
		}
	}
}
