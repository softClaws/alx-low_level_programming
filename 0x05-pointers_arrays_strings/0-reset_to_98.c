#include "main.h"

/*
 * reset_to_98 - function that updates value of a parameter it points to to 98
 * @*n: pointer used
 * @j: parameter
 * Return: nothing
 */

void reset_to_98(int *n)
{
	int j;
	n = &j;

	j = 13;
	*n = 98;
}
