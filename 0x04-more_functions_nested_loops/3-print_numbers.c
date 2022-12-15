#include "main.h"

/**
 * print_numbers - print all the numbers from 0 to 9
 * 
 * Return: nothing
 */

void print_numbers(void)
{
	int num = 0;

	while (num >= 0 && num <= 9)
	{
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');
}
