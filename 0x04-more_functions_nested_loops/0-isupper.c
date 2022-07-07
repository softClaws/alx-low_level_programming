#include "main.h"

/**
 * _isupper - checks if alphabet character is uppercase
 * @c: function argument i.e input parameter
 * return: equals to 1 if alphabet character is uppercase otherwise 0;
*/

int _isupper(int c)
{
	c = 'A';

	if (c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
