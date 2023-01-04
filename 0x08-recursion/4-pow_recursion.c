#include "main.h"

/**
 * _pow_recursion - returns the power of x elevate to y
 * @x: initial number
 * @y: the power of x
 *
 * Return: number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
