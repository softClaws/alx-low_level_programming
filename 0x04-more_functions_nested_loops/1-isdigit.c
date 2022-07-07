#include "main.h"

/**
 * _isdigit - checks for digit 1 - 9
 * @c: number to check
 * Return: equals to 1 for digit otherwise 0
 */

int _isdigit(int c)
{

	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
