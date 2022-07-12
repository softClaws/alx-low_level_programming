#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int g = 0, h = 0;
	char str[500];

	while (*(s + g))
	{
		*(str + g) = *(s + g);
		g++;
	}
	g -= 1;
	while (g >= 0)
	{
		*(s + g) = *(s + h);
		h++;
		g--;
	}
}
