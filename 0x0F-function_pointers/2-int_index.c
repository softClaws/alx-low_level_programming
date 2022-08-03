#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array to search through
 * @size: size of array
 * @cmp: function used to compare
 * Return: first index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size > 0 && array && cmp)
	{
	for (i = 0; i < size; i++)
	{

		j = cmp(array[i]);
		if (j)
			break;
	}
		if (i < size)
			return (i);
	}
	return (-1);
}
