#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * to get from one number to another
 * @n: number1
 * @m: number2
 * Return: number of bits to flip
 * korir codes
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y = 0;
	unsigned long int a = n ^ m;
	int x;
	unsigned long int z;

	for (x = 63; x >= 0; x--)
	{
		z = a >> x;

		if (z & 1)
		{
			y++;
		}
	}
	return (y);
}
