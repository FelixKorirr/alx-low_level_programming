#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - adds positive numbers.
 * @str: array str
 * Return: 0
 */

int check_num(char *str)
{
unsigned int c;
c = 0;
while (c < strlen(str))
{
if (!isdigit(str[c]))
{
return (0);
}
c++;
}
return (1);
}

/**
 * main - print name of program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int c;
int str_to_int;
int m = 0;

c = 1;
while (c < argc)
{
if (check_num(argv[c]))
{
str_to_int = atoi(argv[c]);
m += str_to_int;
}

else
{
printf("Error\n");
return (1);
}
c++;
}
printf("%d\n", m);
return (0);
}
