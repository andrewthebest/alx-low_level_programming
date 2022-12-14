#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char car = 'a';

	while (car >= 'a' && car <= 'z')
	{
		_putchar(car);
		car++;
	}
	_putchar('\n');
}
