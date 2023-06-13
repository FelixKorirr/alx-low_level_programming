#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer input
 * @av: pointer array
 * Return: 0
 * korir codes
 */

char *argstostr(int ac, char **av)

{

	int x, n, y = 0, z = 0;

	char *s;

	if (ac == 0 || av == NULL)

		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)

			z++;
	}

	z += ac;

	s = malloc(sizeof(char) * z + 1);

	if (s == NULL)

		return (NULL);

	for (x = 0; x < ac; x++)
	{

	for (n = 0; av[x][n]; n++)
	{
		s[y] = av[x][n];
		y++;
	}

	if (s[y] == '\0')
	{
		s[y++] = '\n';
	}
	}
	return (s);
}
