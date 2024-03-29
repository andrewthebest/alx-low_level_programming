#include "main.h"
#include <stdlib.h>

int get_len(char *str);
void copy_string(char *str1, char *str2, int start, int len);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the new string after concatenation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, i;

	i = 0;
	if ((s1 == NULL) && (s2 != NULL))
	{
		len2 = get_len(s2);
		str = malloc(sizeof(char) * len2);
		if (str == NULL)
			return (NULL);
		copy_string(str, s2, i, len2);
		return (str);
	}

	if ((s2 == NULL) && (s1 != NULL))
	{
		len1 = get_len(s1);
		str = malloc(sizeof(char) * len1);
		if (str == NULL)
			return (NULL);
		copy_string(str, s1, i, len1);
		return (str);
	}
	if (s1 == NULL && s2 == NULL)
	{
		str = malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (s1 != NULL)
		len1 = get_len(s1);
	if (s2 != NULL)
		len2 = get_len(s2) + 1;

	if ((len2 - 1) > n)
		len2 = n + 1;
	str = malloc(sizeof(char) * (len1 + len2));
	if (str == NULL)
		return (NULL);

	copy_string(str, s1, i, len1);
	i = len1;
	copy_string(str, s2, i, len2);

	return (str);
}

/**
 * get_len - returns the length of str
 * @str: string to get length
 * Return: the length of str
 */

int get_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * copy_string - copies the string of str2 to str1
 * @str1: first string
 * @str2: second string
 * @start: position where the copy start on str1
 * @len: length of str2
 * Return: Nothing
 */

void copy_string(char *str1, char *str2, int start, int len)
{
	int i, j;

	i = start;
	j = 0;
	while (j < len)
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
}
