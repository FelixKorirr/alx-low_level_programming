#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion  - function that returns value of x raised to the power of y
 * @x: base value
 * @y: power
 * Return: -1 if power is less than 0
 * 1 if power is zero
 * korir codes
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
