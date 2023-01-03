#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to work on
 * @needle: substring to locate
 *
 * Return: pointer of char
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, equal, save;
	char *found;

	i = 0;
	j = 0;
	k = 0;
	equal = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			k = i;
			save = i;
			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[j])
					equal = 1;
				else
					equal = 0;
				k++;
				j++;
			}

			if (equal)
				found = &haystack[save];
		}
		i++;
	}

	if (equal)
		return (found);
	else
		return (NULL);
}
