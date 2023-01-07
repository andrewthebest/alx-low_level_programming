#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0
 */

int main (int argc, char *argv[])
{
	char *ptr;
        long res;

        if (argc != 3)
        {
		printf("Error\n");
		return (1);
	}

	res = strtol(argv[1], &ptr, 10) * strtol(argv[2], &ptr, 10);
	printf("%ld\n", res);
	return (0);
}
