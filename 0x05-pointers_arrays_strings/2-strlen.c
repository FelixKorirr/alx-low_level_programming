#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * strlen - returns the length of a string.
 *
 * Return: 0.
 */
int _strlen(char *s)
{
int len;

s = "Hello Korir";
len = strlen(s);
printf("%d\n", len);
return 0;
}
