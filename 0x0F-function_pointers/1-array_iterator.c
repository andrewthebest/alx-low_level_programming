#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array to work on
 * @size: size of the array
 * @action: pointer to the function to execute
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i = 0;

	if (!size || !array || (size < i) || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
