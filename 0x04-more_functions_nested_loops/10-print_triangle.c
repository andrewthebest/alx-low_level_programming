#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i = 1;
	int j = 1;
	int k = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i <= size)
		{
			while (j <= (size - i))
			{
				_putchar(' ');
				j++;
			}

			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			j = 1;
			k = 1;
			i++;
		}
	}
}
