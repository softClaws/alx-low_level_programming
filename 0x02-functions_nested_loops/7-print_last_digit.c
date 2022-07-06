#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @y: integer argument
 * Return: last digit of number
 */

int print_last_digit(int y)
{
	if (y < 0)
	{
		y *= -1;

		_putchar('0' + (y % 10));
	}

	return (y % 10);

}
