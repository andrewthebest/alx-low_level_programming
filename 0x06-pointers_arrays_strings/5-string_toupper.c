#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string to convert
 *
 * Return: string converted
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
