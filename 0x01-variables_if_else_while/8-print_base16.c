#include <stdio.h>
/**
 * main - Print all numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	while (i >= 48 && i < 58)
	{
		putchar(i);
		i++;
	}
	while (i >= 'a' && i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
