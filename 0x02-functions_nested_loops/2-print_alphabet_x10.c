#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 time
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char car = 'a';
	int count = 1;

	while (count <= 10)
	{
		while (car >= 'a' && car <= 'z')
		{
			_putchar(car);
			car++;
		}
		_putchar('\n');
		car = 'a'
		count++;
	}
}
