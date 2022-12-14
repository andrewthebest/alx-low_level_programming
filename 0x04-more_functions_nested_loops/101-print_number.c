#include "main.h"

/**
 * print_number - print an integer
 * @n: the number to print
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int tmp;
	unsigned int car;

	tmp = n;

	if (n < 0)
	{
		tmp = tmp * -1;
		_putchar('-');
	}

	if ((tmp / 10) > 0)
		print_number(tmp / 10);

	car = tmp % 10;
	_putchar('0' + car);
}
