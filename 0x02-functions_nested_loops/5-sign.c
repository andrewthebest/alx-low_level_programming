#include "main.h"

/**
 * print_sign - check if a number is positive, negative or null
 * @num: integer to test
 *
 * Return: 1 if 'num' is positive, 0 if negative and -1 if null
 */

int print_sign(int num)
{
	int result;

	if (num > 0)
	{
		_putchar('+');
		result = 1;
	}
	else
	{
		if (num == 0)
		{
			_putchar('0');
			result = 0;
		}
		else
		{
			_putchar('-');
			result = -1;
		}
	}
	_putchar('\n');

	return (result);
}
