#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{

char *j;
int i, k = 0;

if (str == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
i++;

j = malloc(sizeof(char) * (i + 1));
if (j == NULL)
return (NULL);

for (k = 0; str[k]; k++)
{
j[k] = str[k];
}
return (j);
}
