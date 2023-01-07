#include <stdio.h>

/**
 * main - main program
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0
 */

int main (int argc, char *argv[])
{
	int n;

	n = 0;
        if (argc == 1)
		printf("%s\n", argv[0]);
	else
	{
		while (n < argc)
		{
			printf("%s\n", argv[n]);
			n++;
		}
	}
        return (0);
}
