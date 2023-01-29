#include "main.h"

int is_prime_number_helper(int n, int divisor);

/**
 * is_prime_number - check if an integer is a prime number
 * @n: integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_number_helper(n, 2));
}

/**
 * is_prime_number_helper - recursively check if n is divisible by divisor
 * @n: integer to check
 * @divisor: divisor to try
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number_helper(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_number_helper(n, divisor + 1));
}
