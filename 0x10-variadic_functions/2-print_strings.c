#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function to print string
 * @separator: seperates string
 * @n: strings
 * Return: nothing
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *strng;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{

		strng = va_arg(valist, char *);
		if (strng)
		printf("%s", strng);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
