#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	car = 'a';
	while (car >= 'a' && car <= 'z')
	{
		_putchar(car);
	}
	_putchar('\n');
}
