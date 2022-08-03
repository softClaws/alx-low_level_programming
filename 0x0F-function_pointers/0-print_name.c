#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: argument one
 * @f: argument two
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
