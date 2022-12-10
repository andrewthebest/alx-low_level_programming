#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
	int number = 48;

	while (number >= 48 && number <= 57)
	{
		putchar(number);
		putchar(',');
		putchar(' ');
		number++;
	}

	putchar('\n');

	return (0);

}
