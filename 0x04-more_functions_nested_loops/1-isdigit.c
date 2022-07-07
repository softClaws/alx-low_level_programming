#include "main.h"

/**
 * _isdigit - checks for digit 1 - 9
 * @c: number to check
 * Return: equals to 1 for digit otherwise 0
 */

int _isdigit(int c)
{
	c = 0;
	if (c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
