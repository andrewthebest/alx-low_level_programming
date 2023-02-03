#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: input
 * @m: bits
 *
 * Return: the number of bits or 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		m = m >> 1;
		n = n >> 1;
	}

	return (count);

}
