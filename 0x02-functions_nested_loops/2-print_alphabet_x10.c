#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 time
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		print_alphabet();
		count++;
	}
}   
