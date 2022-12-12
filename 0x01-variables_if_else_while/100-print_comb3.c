#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
	int num1 = 48;
	int num2 = 48;

	while (num1 <= 57)
	{
		while (num2 <= 57)
		{
			if (num1+num2 == num2+num1)
			{
				continue;
			}
			else
			{
				putchar(num1);
				putchar(num2);
				putchar(',');
				putchar(' ');
			}
			num2++;
		}		
		num1++;
	}

	putchar('\n');

	return (0);

}
