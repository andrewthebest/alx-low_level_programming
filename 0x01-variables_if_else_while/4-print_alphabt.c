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
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
