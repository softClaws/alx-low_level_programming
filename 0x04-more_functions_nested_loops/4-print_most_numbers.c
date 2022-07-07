#include "main.h"
/**
 * print_most_numbers - print digit character excluding 2 and 4
 */
void print_most_numbers(void)
{
	int h;

	h = 0;
	while (h <= 9)
	{
		if (h == 2 || h == 4)
		{
		_putchar('\n');

		}
		_putchar(h);
		h++;
	}
}
