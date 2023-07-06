#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0(big), 1(Small)
 * korir codes
 */
int get_endianness(void)
{
	unsigned int x = 1;

	char *str = (char *) &x;

	return (*str);
}
