#include <stdio.h>

/**
 * main - determine the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long num;
	long i;

	num = 612852475143;
	i = 2;

	while (i < num)
	{
		while ((num % i) == 0)
		{
			num = num / i;
		}
	}

	printf("%lu\n", num);
	
	return (0);
}
