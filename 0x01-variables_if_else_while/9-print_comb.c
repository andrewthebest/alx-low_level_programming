#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
	int number;

	while (number >= 48 && number <= 57)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');
		number++;
	}

	putchar('\n');

	return(0);

}
