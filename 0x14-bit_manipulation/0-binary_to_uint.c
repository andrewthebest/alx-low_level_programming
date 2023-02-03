#include "main.h"

unsigned int str_len(const char *b);
int power(int base, int expo);

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: String of 0 and 1 chars to be converted to an unsigned integer
 *
 * Return: The converted number or 0
 *     if: one or more chars in string b is not a 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int index, str_index;

	if (b == NULL)
		return (0);

	uint = 0;
	str_index = str_len(b) - 1;
	for (index = str_index; index >= 0; index--)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		uint += (b[index] - '0') * power(2, str_index - index);
	}

	return (uint);
}


/**
 * str_len - returns the length of a string
 * @b: string to work on
 *
 * Return: the length of the string
 */
unsigned int str_len(const char *b)
{
	int i, len;

	len = 0;
	for (i = 0; b[i]; i++)
	{
		len++;
	}
	return (len);
}


/**
 * power - raises a number to a given exponent
 * @base: base
 * @expo: exponent
 *
 * Return: result of calculation
 */
int power(int base, int expo)
{
	int i, result;

	result = 1;
	for (i = 0; i < expo; i++)
	{
		result *= base;
	}
	return (result);
}
