#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
return (find_prime(n, 2));
}
/**
 * find_prime - checks if number is divisible
 *@n:int
 *@m: int
 * Return: int
 */
int find_prime(int n, int m)
{
if (m >= n && n > 1)
return (1);
else if (n % m == 0 || n <= 1)
return (0);
else
return (find_prime(n, m + 1));
}
