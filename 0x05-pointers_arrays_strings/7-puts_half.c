#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to work on
 *
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int i, half_size;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	half_size = (i - 1) / 2;

	while (str[half_size] != '\0')
	{
		_putchar(str[half_size]);
		half_size++;
	}
}
