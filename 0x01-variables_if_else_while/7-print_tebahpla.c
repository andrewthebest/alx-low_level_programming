#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)

{
	char alphabet = 122;

	while (alphabet <= 122 && alphabet >= 97)
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');

	return (0);
}
