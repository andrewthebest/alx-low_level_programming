#include <stdio.h>
/**
 * main - Print all numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 'a';

	while (i >= 48 && i < 58)
	{
		putchar(i);
		i++;
	}
	while (j >= 'a' && j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
