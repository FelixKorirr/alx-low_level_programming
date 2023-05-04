#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x;
	int y = 0;
	unsigned long int z;

	for (x = 63; x >= 0; x--)
	{
		z = n >> x;

		if (z & 1)
		{
			_putchar('1');
			y++;
		}
		else if (y)
		{
			_putchar('0');
		}
	}
	if (!y)
	{
		_putchar('0');
	}
}

