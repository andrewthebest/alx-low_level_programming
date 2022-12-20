#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int i, j, length;
	char ch;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	length = i - 1;
	j = length;
	i = 0;

	while (i <= (length / 2))
	{
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;

		i++;
		j--;
	}
}
