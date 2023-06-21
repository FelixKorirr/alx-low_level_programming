#include <stdio.h>
#include "function_pointers.h"

/**
*print_name - prints a name using a function pointer
*@name: string
*@f: function pointer
*Return: nothing
*korir codes
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}

f(name);
}
