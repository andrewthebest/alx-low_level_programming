#include "main.h"

/**
 * _alpha - test if 'car' is an alphabetic character (lowercase or uppercase)
 * @car: character to test
 *
 * Return: 1 if 'car' is a letter, 0 instead
 */

int _isalpha(int car)
{
	int result;

	if ((car >= 'a' && car <= 'z') || (car >= 'A' && car <= 'Z'))
		result = 1;
	else
		result = 0;

	return (result);
}
