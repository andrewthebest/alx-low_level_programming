#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, n, res, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = 5;
		i = 0;
		res = 0;
		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}

		while (i < n)
		{
			if (cents >= coins[i])
			{
				if ((cents % coins[i]) == 0)
				{
					res += cents / coins[i];
					break;
				}
				else
				{
					res += cents / coins[i];
					cents = cents % coins[i];
				}
			}
			i++;
		}
		printf("%d\n", res);
	}
	return (0);
}
