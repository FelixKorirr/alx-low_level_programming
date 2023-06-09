#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 * korir codes
 */
int main(int argc__attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
