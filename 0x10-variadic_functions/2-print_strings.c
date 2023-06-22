#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - prints strings
 * @separator: string printed between strings.
 * @n: number of strings passed to function.
 * @...: variable number of strings printed.
 * Description: don't print if separator is NULL
 * If one of the strings if NULL, print (nil)
 * korir codes
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int y;


	va_start(str, n);


	for (y = 0; y < n; y++)
	{
		s = va_arg(str, char *);


		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);


		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(str);
}
