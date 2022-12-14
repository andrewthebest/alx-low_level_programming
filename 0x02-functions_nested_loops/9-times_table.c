#include "main.h"
#include <stdio.h>

/**
 * times_table - print the nine times tables starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int mult;

	while (i >= 0 && i <= 9)
	{
		while (j >= 0 && j <= 9)
		{
			mult = i * j;
			printf("%d", mult);

			if (j != 9)
				printf(",");

			if (mult < 10)
				printf("  ");
			else
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
		j = 0;
	}
}
