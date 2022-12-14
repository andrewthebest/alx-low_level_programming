#include "main.h"

/**
 * _abs: compute the absolute value of 'num'
 * @num: the number to compute
 *
 * Return: the computed value of 'num'
 */

int _abs(int num)
{
	if (num < 0)
		num = num * -1;

	return num;
}
