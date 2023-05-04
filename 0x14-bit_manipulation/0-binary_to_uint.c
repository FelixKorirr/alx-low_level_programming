#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string with a binary number
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int x;

	if (!b)
	{
		return (0);
	}

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}
		value = 2 * value + (b[x] - '0');
	}

	return (value);
}
