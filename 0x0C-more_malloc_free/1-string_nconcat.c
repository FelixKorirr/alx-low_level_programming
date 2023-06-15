#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 * korir codes
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *str;
	unsigned int x = 0, j = 0, k = 0, l = 0;

	while (s1 && s1[k])
	{
		k++;
	}
	while (s2 && s2[l])
	{
		l++;
	}
	if (n < l)
	{
		str = malloc(sizeof(char) * (k + n + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (k + l + 1));
	}
	if (!str)
	{
		return (NULL);
	}
	while (x < k)
	{
	str[x] = s1[x];
	x++;
	}

	while (n < l && x < (k + n))

		str[x++] = s2[j++];

	while (n >= l && x < (k + l))

		str[x++] = s2[j++];

	str[x] = '\0';
	return (str);
}
