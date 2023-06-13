#include <stdlib.h>
#include "main.h"

/**
 * outer - counts the number of characters in a string
 * @s: string to evaluate
 * Return: number of words
 *korir codes
 */

int outer(char *s)
{
	int q, k, l;

	q = 0;
	l = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] == ' ')
			q = 0;
		else if (q == 0)
		{
			q = 1;
			l++;
		}
	}
	return (l);
}

/**
 * **strtow - function that splits a string into words.
 * @str: string to split
 * Return: pointer to an array of strings otherwise null
 */

char **strtow(char *str)
{
	char **m, *temp;

	int i, j = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = outer(str);
	if (words == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (words + 1));

	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				m[j] = temp - c;
				j++;
				c = 0;
			}
		}

		else if (c++ == 0)
			start = i;
	}
	m[j] = NULL;
	return (m);
}
