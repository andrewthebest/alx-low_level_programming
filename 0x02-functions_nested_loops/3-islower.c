#include "main.h"

/**
 * _islower - test if 'car' is lowercase character
 * @car: character to test
 *
 * Return: 1 if 'car' is lowercase, 0 instead
 */

int _islower(int car)
{

	int result;

	if (car >= 'a' && car <= 'z')
		result = 1;
	else
		result = 0;

	return (result);
}
