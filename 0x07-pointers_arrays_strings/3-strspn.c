#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target match
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{

	int m, n, same;

	same = m = 0;

	/* going through string */

	while (s[m] != '\0')
	{
		/* going through target */

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{

			same++;

			break;
			}
		 /* check if index don't match, return same */

			if (accept[n + 1] == '\n' && s[m] != accept[n])

					return (same);
		}

		m++;
	}

	/* return no. if all match till end */
	return (same);
}
