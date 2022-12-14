#include "main.h"

/**
 * jack_bauer - print all minutes within 24 hours
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int hour1 = '0';
	int hour2 = '0';
	int min1 = '0';
	int min2 = '0';

	while (hour1 >= '0' && hour1 <= '2')
	{
		while (hour2 >= '0' && hour2 <= '3')
		{
			while (min1 >= '0' && min1 <= '5')
			{
				while (min2 >= '0' && min2 <= '9')
				{
					_putchar(hour1);
					_putchar(hour2);
					_putchar(':');
					_putchar(min1);
					_putchar(min2);
					_putchar(' ');
					_putchar('\n');
					min2++;
				}
				min1++;
				min2 = '0';
			}
			hour2++;
			min1 = '0';
		}
		hour1++;
		hour2 = '0';
	}
	_putchar('\n');
}
