#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns pointer to newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char
 * Return: pointer to string, else null
 * korir codes
 */

char *_strdup(char *str)

{

	char *a;

	int i, j = 0;



	if (str == NULL)

		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;



	a = malloc(sizeof(char) * (i + 1));



	if (a == NULL)

		return (NULL);

	for (j = 0; str[j]; j++)

		a[j] = str[j];



	return (a);

}
