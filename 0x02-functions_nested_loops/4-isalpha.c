#include "main.h"
/**
 * _isalpha - is a function that checks for alphabet
 *  @c: character to check
 *return:  1 if it is alphabet, 0 if not
*/

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
