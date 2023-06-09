#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints minimum number of coins to
 * make change for an amount of money
 * @argc: Argument count
 * @argv: Array
 * Return: 0 if success,otherwise 1
 */

int main(int argc, char *argv[])
{
	int x, y, value;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	value = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	for (y = 0; y < 5 && x >= 0; y++)
	{
		while (x >= coins[y])
		{
			value++;
			x -= coins[y];
		}
	}

	printf("%d\n", value);
	return (0);
}

