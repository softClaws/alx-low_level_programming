#include "main.h"
/**
* print_alphabet_x10 - prints lowercase alphabet x10
* Return: 0
*/

void print_alphabet_x10(void)
{
	char h;
	int x;

	h = 'a';
	x = 1;


	while (x <= 10)
	{
		while (h <= 'z')
		{
		_putchar(h);
		x++;
		}
		_putchar('\n');
	}

}
