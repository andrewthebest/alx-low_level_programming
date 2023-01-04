#include "main.h"

/**
 * is_prime_number - test if an int is prime number
 * @n: integer to test
 *
 * Return: 1 if number is prime or 0 otherwise
 */

int is_prime_number(int n)
{
	if (is_prime_number(n - 1))
		return (0);

	if (n % (n - 1) == 0)
	{
		is_prime_number(n - 1);
	}

	return (1);
}
