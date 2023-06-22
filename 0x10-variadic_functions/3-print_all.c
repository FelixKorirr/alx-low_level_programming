
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_all - prints anything passed to it
 * @format: list of types of arguments passed to function
 * korir codes
 */

void print_all(const char * const format, ...)
{
	int j = 0;
	char *string, *st = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", st, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", st, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", st, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", st, string);
					break;
				default:
					j++;
					continue;
			}
			st = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(list);
}
