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

		if (number == 57)
		{
			break;
		}

		putchar(number);
		putchar(',');
		putchar(' ');
		number++;
	}

	putchar('\n');

	return (0);

}
