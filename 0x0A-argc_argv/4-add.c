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
	char *ptr;
	int n;
	int res;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		n = 1;
		res = 0;
		while (n < argc)
		{
			if (strtol(argv[n], &ptr, 10) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				res += strtol(argv[n], &ptr, 10);
			}
			n++;
		}
		printf("%d\n", res);
	}

	return (0);
}
