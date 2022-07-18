#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal matrix
 * @a: matrix
 * @size: size of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int dsum1 = 0;
	int dsum2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		dsum1 += a[i];
	}
	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		dsum2 += a[i];
	}
	printf("%d, %d\n", dsum1, dsum2);

}
