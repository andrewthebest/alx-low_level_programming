#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from 'num' to 98
 * @num: start number
 *
 * Return: nothing
 */

void print_to_98(int num)
{
	int count = num;

	while (count >= num && count <= 98)
	{
		printf("%d, ",count);
	}
}
