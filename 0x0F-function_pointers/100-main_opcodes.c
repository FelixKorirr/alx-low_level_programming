#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints its own opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 * korir codes
 */

int main(int argc, char *argv[])
{
	int g, i;
	char *array;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	g = atoi(argv[1]);


	if (g < 0)
	{
		printf("Error\n");
		exit(2);
	}


	array = (char *)main;


	for (i = 0; i < g; i++)
	{
		if (i == g - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
