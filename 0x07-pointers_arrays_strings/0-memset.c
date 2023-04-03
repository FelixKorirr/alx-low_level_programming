#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address of memory to be filled
 * @n: number of bytes to be changed
 * @b: desired value
 *
 * Return: modified array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;

for ( ; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
