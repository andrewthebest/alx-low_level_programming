#include "lists.h"

void first(void) __attribute__((constructor));

/**
 * first - prints a text before the main()
 *
 * Return : Nothing
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
