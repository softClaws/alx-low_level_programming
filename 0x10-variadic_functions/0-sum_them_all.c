#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up all param
 * @n: number of parameters
 *
 *
 * Return: sum of all parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int m;
	va_list valist;

	va_start(valist, n);
	for (m = 0; m < n; m++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
