#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the args of a program
 * @ac: length of args
 * @av: pointer on array of char
 *
 * Return: pointer of char
 */

char *argstostr(int ac, char **av)
{
	int i, j, count;
	char *str;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	count = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
		count++;
		i++;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < (count))
	{
		if (*(*av + i) == '\0')
			str[i] = '\n';
		else
			str[i] = *(*av + i);
		i++;
	}
	str[count] = '\0';
	return (str);
}
