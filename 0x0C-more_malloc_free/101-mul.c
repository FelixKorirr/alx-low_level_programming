#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - natural numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 * korir codes
 */

int main(int argc, char *argv[])
{
	unsigned long total;

	int num1, num2;

	if (argc != 3)
	{ printf("Error\n");
		exit(98); }
	for (num1 = 1; num1 <  argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (argv[num1][num2] > 57 || argv[num1][num2] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}

	}
	total = atoi(argv[1]) *  atoi(argv[2]);

	printf("%lu\n", total);

	return (0);
}
