#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - prints numbers
 * @separator: string printed between numbers.
 * @n: number of integers
 * @...: variable number of numbers to be printed
 * korir codes
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int indx;


	va_start(i, n);


	for (indx = 0; indx < n; indx++)
	{
		printf("%d", va_arg(i, int));


		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(i);
}
