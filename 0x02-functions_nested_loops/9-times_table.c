#include "main.h"

/**
 * times_table - print the nine times tables starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int mult;

	while (i >= 0 && i <= 9)
	{
		while (j >= 0 && j <= 9)
		{
			mult = i * j;

			if (mult < 10)
			{
				if (j == 0)
				{
					_putchar('0');
				}

				if (j != 0)
				{
					_putchar(' ');
					_putchar('0' + (mult % 10));
				}

				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));

				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
