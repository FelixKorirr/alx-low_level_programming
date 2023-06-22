#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - function to find sum of all its parameters.
 * @n: number of parameters
 * @...: variable number of parameters to calculate the sum of.
 * Return: If n == 0 return 0,
 * otherwise, sum of all parameters.
 * korir codes
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, result = 0;

	va_start(ap, n);


	for (i = 0; i < n; i++)
		result += va_arg(ap, int);

	va_end(ap);

	return (result);
}
