#include <stdio.h>
#include "main.h"

/**
 * is_outer - recursive function
 * @a: input number
 * @c: input number
 * Return: 0
 * korir codes
 */

int is_outer(int c, int a)
{
	if ((a * a) > c)
		return (-1);

	else if ((a * a) == c)
		return (a);

	else
		return (is_outer(c, a + 1));
}

/**
 * _sqrt_recursion - function that returns square root of a number
 * @n: input number
 * Return: 0
 * korir codes
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (is_outer(n, 0));
}
