#include "lists.h"

void outer(void) __attribute__ ((constructor));

/**
 * outer - prints a sentence
 * korir codes
 */

void outer(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
