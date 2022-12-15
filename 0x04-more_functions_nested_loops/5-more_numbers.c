#include "main.h"

/**
 * more_numbers - print all the numbers from 0 to 14 ten times
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int count = 0;
	int i = 1;
	
	while (i <= 10)
	{
		while (count <= 14)
		{
			if (count > 9 && count <= 14)
				_putchar('0' + (count / 10));

			_putchar('0' + (count % 10));
			count++;
		}
		i++;
	}
	_putchar('\n');
}
