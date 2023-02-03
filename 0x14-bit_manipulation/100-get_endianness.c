#include "main.h"

/**
 * get_endianness - checks if computer is big or little Endian
 *
 * Return: 0 if big Endian and 1 if little Endian
 */

int get_endianness(void)
{
	char num;
	char *ptr;

	num = '1';
	ptr = &num;
	if (*ptr == 0)
		return (0);
	else
		return (1);
}
