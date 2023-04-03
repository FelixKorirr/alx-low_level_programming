#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: input
 * @needle: input
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *k = haystack;
char *s = needle;

while (*k == *s && *s != '\0')
{
k++;
s++;
}
if (*s == '\0')
{
return (haystack);
}
}
return (0);
}
