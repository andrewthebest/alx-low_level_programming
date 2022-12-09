#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	lastNum = n % 10;
	if (lastNum > 5)
	{
		printf("%d and is greater than 5\n", lastNum);
	}
	else
	{
		if (lastNum == 0)
		{
			printf("%d and is 0\n", lastNum);
		}
		else
		{
			if (lastNum < 6 && lastNum != 0)
			{
				printf("%d and is less than 6 and not 0\n", lastNum);
			}
		}
	}
	return (0);
}
