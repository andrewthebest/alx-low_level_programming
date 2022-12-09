#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch >= 'a' && ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch >= 'A' && ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
