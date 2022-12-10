#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nber = 0;

	while (nber >= 0 && nber <= 9)
	{
		printf("%d", nber);
		nber++;
	}
	putchar('\n');
	return (0);

}
