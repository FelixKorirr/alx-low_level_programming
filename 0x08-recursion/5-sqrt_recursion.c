#include "main.h"

int actual_sqrt_recursion(int a, int b);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@a :number to get its square root
 * Return: square root.
 */
int _sqrt_recursion(int a)
{
if (a < 0)
return (-1);
return (actual_sqrt_recursion(a, 0));
}

/**
 * actual_sqrt_recursion - recurses to find square root
 * @n: number to calculate its square root
 * @m: iterator
 * Return: square root
 */
int actual_sqrt_recursion(int n, int m)
{
if (m * m > n)
return (-1);
if (m * m == n)
return (m);
return (actual_sqrt_recursion(n, m + 1));
}
