#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: pointer to string
 * Return: integer value
 * korir codes
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int rem, dec_num = 0, base = 1;
	int i, j;

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
	}

	i = atoi(b);

	while (i > 0)
	{
		rem = i % 10;
		dec_num = dec_num + (rem * base);
		i = i / 10;
		base = base * 2;
	}
	return (dec_num);
}
