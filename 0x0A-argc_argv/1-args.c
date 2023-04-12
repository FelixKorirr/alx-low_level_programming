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

(void) argv; /*Ignore argv*/
printf("%i\n", argc - 1);

return (0);
}
