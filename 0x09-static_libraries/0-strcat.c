#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void          
 */
char *_strcat(char *dest, char *src)
{
int k;
int l;
k = 0;
while (dest[k] != '\0')
{
k++;
}
l = 0;
while (src[l] != '\0')
{
dest[k] = src[l];
k++;
l++;
}                      
dest[k] = '\0';
return (dest);
}

