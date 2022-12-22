#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: result of comparison (an integer)
 */

int _strcmp(char *s1, char *s2)
{
	int res, i;

	i = 0;
	while (s1[i] != '\0')
	{
		if ((s1[i] - s2[i]) == 0)
		{
			i++;
			res = 0;
		}
		else
		{
			res = s1[i] - s2[i];
			break;
		}
	}

	return (res);
}
