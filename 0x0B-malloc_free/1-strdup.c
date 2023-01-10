#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: pointer of char
 *
 * Return: pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *s;
	int len, i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	s = malloc(sizeof(str) * len);

	if ((s == NULL) || (str == NULL))
		return (NULL);

	while (i < len)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
