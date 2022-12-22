#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: string to work on
 *
 * Return: Capitalized string
 */

int test_separator(int sep)
{
	char list[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	int i, res;

	i = 0;
	while (i < 14)
	{
		if (sep == list[i])
		{
			res = 1;
			break;
		}
		else
		{
			i++;
		}
		res = 0;
	}
	return (res);
}

char *cap_string(char *s)
{
	int i, test_sep;

	i = 0;
	while (s[i] != '\0')
	{
		test_sep = test_separator(s[i - 1]);

		if ((i == 0) || (test_sep == 1))
		{
			if (s[i - 1] == '\t')
				s[i - 1] = ' ';

			if ((s[i] >= 97) && (s[i] <= 122))
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
