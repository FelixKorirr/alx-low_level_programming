#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory where it is stored.
 * @src: memory where it is copied.
 * @n: no of bytes.
 *
 * Return: copied memory with n bytes changed.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int b = 0;
int a = n;

for ( ; b < a; b++)
{
dest[b] = src[b];
n--;
}
return (dest);
}          
