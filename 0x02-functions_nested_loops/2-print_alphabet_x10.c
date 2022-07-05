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


	for (; x <= 10; x++)
	{
		for (; h <= 'z'; h++)
		{
		_putchar(h);

		}
		_putchar('\n');

	}

}
