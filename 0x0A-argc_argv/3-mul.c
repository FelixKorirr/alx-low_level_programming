#include <stdio.h>
#include "main.h"

/**
 * _atoi - program that converts string to integer
 * @s: string
 * Return: the integer value
 */

int _atoi(char *s)
{
	int i, j, a, length, k, digit;
	i = 0;
	j = 0;
	a = 0;
	length = 0;
	k = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && k == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			a = a * 10 + digit;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}

	if (k == 0)
		return (0);

	return (a);
}

/**
 * main - program that multiplies two numbers
 * @argc: no of arguments
 * @argv: Array
 *
 * Return: 0 if success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int z, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	z = x * y;

	printf("%d\n", z);

	return (0);
}
