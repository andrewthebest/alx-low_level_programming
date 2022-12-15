#include "main.h"

/**
 * print_last_digit - print the last digit of 'num'
 * @num: the number to work on
 *
 * Return: the last digit of 'num'
 */

int print_last_digit(int num)
{
	int result;

	if (num == 0)
		result = 0;
	else
	{
		if (num < 0)
			result = (num % 10) * -1;
		else
			result = num % 10;
	}
	_putchar('0' + result);

	return (result);
}
