#include "main.h"

/**
 * flip_bits - returns no of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 * created by Korir
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;
	int y = 0;

	unsigned long int a;
	unsigned long int c = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		a = c >> x;
		if (a & 1)
		{
			y++;
		}
	}

	return (y);
}
