#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Return: 0
 */

int main(void)
{
	int min = 1;
	int max = 100;
	int i;

	i = min;
	while (i <= max)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz");
		else if ((i % 5) == 0 && (i % 3) != 0)
			printf("Buzz");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i != max)
			printf(" ");

		i++;
	}
	printf("\n");

	return (0);
}
