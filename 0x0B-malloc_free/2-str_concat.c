#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the new string after concatenation
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1, len2, i, j;

	len1 = 0;
	len2 = 0;
	i = 0;
	j = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
		len2++;
	}
	str = malloc(sizeof(char) * (len1 + len2));
	if (str == NULL)
		return (NULL);
	while (j < len1)
	{
		str[i] = s1[j];
		i++;
		j++;
	}

	j = 0;
	while (j < len2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
