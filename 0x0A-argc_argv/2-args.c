#include <stdio.h>
#include "main.h"

/**
 * main - print name of program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{

int a = 0;

if (argc > 0)
{
while (a < argc)
{
printf("%s\n", argv[a]);
a++;
}
}

return (0);
}
