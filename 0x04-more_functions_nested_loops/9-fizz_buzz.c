#include "main.h"
#include <stdio.h>

/**
 * main - program that makes "Fizz Buzz test"
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int n;
	int num;
	int mult3;
	int mult5;
	int sum = 0;

	while (i <= 100)
	{
		n = i;
		num = i;

		while (1)
		{
			/* Test if number is multiple of 3 */
			while (n != 0)
			{
				sum += (n % 10);
				n /= 10;
			}

			if (sum > 9)
				n = sum;
			else
			{
				if ((sum == 3) || (sum == 6) || (sum == 9))
					mult3 = 1;
				else
					mult3 = 0;

				break;
			}
			sum = 0;
		}
		/* Test if the number is multiple of 5 */
		if ((num % 10) == 0 || (num % 10) == 5)
			mult5 = 1;
		else
			mult5 = 0;

		if (mult3 == 1)
			printf("Fizz");
		else
			printf("%d", i);

		if (mult5 == 1)
			printf("Buzz");
		else
			printf("%d", i);

		if ((mult3 == 1) && (mult5 == 1))
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i != 100)
			_putchar('\n');

		i++;
	}

	return (0);
}
