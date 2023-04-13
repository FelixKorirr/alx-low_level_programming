#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  cause normal process termination with a status value of 98
 *@b: allocated memory
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
void *x;

x = malloc(b);
if (x == NULL)
{
exit(98);
}
return (x);
}
