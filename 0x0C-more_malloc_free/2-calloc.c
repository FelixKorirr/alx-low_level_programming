#include <stdlib.h>
#include "main.h"

/**
 * *outer - fills memory with constant byte
 * @str: memory area to be filled
 * @a: char value to copy
 * @n: no of times to copy
 * Return: pointer to the memory
 * korir codes
 */

char *outer(char *str, char a, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		str[x] = a;
	}

	return (str);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: elements in the array
 * @size: size of element
 * Return: pointer to allocated memory,otherwise null
 * korir codes
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}

	outer(p, 0, nmemb * size);

	return (p);

}
