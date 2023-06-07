#include <stdio.h>
#include "main.h"

/**
 * is_outer - recursive function
 * @x: input number
 * @y: input number
 * Return: 1 if prime, otherwise 0
 * korir codes
 */

int is_outer(int x, int y)
{
	if (x <= 1)
		return (0);
	if (x % y == 0 && y > 1)
		return (0);
	if ((x / y) < y)
		return (1);
	else
		return (is_outer(x, y + 1));
}



/**
 * is_prime_number - function that returns the natural square root of a number
 * @n: input number
 * Return: 1 if integer is prime number,
 * otherwise 0
 * korir codes
 */

int is_prime_number(int n)
{
	return (is_outer(n, 1));
}
