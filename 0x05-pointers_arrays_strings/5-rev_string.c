#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int i, j, length;
	char *first_char, *last_char, ch;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	length = i - 1;
	first_char = s;
	last_char = s;
	j = 0;
	i = 0;

	while (j < length)
	{
		last_char++;
	}

	while (i < (length / 2))
	{
		ch = *last_char;
		*last_char = *first_char;
		*first_char = ch;

		first_char++;
		last_char--;
	}
}
