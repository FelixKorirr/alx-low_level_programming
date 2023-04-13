#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: first char
* @s2: secound char
* @n: unsigned int
*
* Return: return NULL if function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, c, d;
char *s;


if (s1 == NULL)
{
a = 0;
}
else
{
for (a = 0; s1[a]; ++a)
;
}
if (s2 == NULL)
{
c = 0;
}
else
{
for (c = 0; s2[c]; ++c)
           ;
}
if (c > n)
c = n;
s = malloc(sizeof(char) * (a + c + 1));
if (s == NULL)
return (NULL);
for (d = 0; d < a; d++)
s[d] = s1[d];
for (d = 0; d < c; d++)
s[d + a] = s2[d];
s[a + c] = '\0';
return (s);
}

