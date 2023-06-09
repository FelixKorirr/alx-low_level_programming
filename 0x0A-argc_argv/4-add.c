#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * is_outer - checks the digit
 * @s: string
 *
 * Return: 0
 */
int is_outer(char *s)
{
	unsigned int x;

	x = 0;
	while (x < strlen(s))

	{
		if (!isdigit(s[x]))
		{
			return (0);
		}

		x++;
	}
	return (1);
}

/**
 * main - program that prints the name of the program
 * @argc: Argument count
 * @argv: Array
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{

	int a, value;
	int sum = 0;

	a = 1;
	while (a < argc)
	{
		if (is_outer(argv[a]))

		{
			value = atoi(argv[a]);
			sum += value;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		a++;
	}

	printf("%d\n", sum);

	return (0);
}
