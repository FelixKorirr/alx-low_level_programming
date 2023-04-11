#include "main.h"
#include <stdlib.h>

/**
 * count_word -  count number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
int a, c, d;
a = 0;
d = 0;

for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
a = 0;
else if (a == 0)
{
a = 1;
d++;
}
}
return (d);
}

/**
 * **strtow - splits string to words
 * @str: string
 * Return: Pointer to array of strings if success or null(error)
*/

char **strtow(char *str)
{
char **m, *tmp;
int i, k = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);

m = (char **)malloc(sizeof(char *) * (words + 1));
if (m == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
m[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}

m[k] = NULL;

return (m);
}

