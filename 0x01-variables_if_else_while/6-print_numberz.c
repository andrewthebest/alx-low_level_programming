#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/corect)
 */
int main(void)

{
	int i = 48;

	while (i >= 48 &&  i <= 57)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);

}
