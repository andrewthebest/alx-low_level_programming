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

	while (hour1 >= 48 && hour1 <= 50)
	{
		while (hour2 >= 48 && hour2 <= 52)
		{
			while (min1 >= 48 && min1 <= 53)
			{
				while (min2 >= 48 && min2 <= 57)
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
				min2 = 48;
			}
			hour2++;
			min1 = 48;
		}
		hour1++;
		hour2 = 48;
	}
	_putchar('\n');
}
