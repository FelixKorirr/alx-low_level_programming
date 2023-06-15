#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define ERR_MSG "Error"

/**
 * is_outer - checks if string has non-digit
 * @str: string to be evaluated
 * Return: 0 if a non-digit, otherwise 1
 * korir codes
 */
int is_outer(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] < '0' || str[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length of string
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * fault - tackles errors for main function
 */
void fault(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two natural numbers
 * @argc: argument count
 * @argv: array
 * Return: 0
 * korir codes
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int l1, l2, length, i, c, d1, d2, *total, r = 0;

	num1 = argv[1], num2 = argv[2];
	if (argc != 3 || !is_outer(num1) || !is_outer(num2))
		fault();
	l1 = _strlen(num1);
	l2 = _strlen(num2);
	length = l1 + l2 + 1;
	total = malloc(sizeof(int) * length);
	if (!total)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		total[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = num1[l1] - '0';
		c = 0;
		for (l2 = _strlen(num2) - 1; l2 >= 0; l2--)
		{
			d2 = num2[l2] - '0';
			c += total[l1 + l2 + 1] + (d1 * d2);
			total[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			total[l1 + l2 + 1] += c;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (total[i])
			r = 1;
		if (r)
			_putchar(total[i] + '0');
	}
	if (!r)
		_putchar('0');
	_putchar('\n');
	free(total);
	return (0);
}
