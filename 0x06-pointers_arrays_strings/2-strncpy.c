#include "main.h"

/**
 * _strncpy - copies n bytes of src to the dest string
 * @dest: string to copy to
 * @src: string to be copied
 * @n: largest number of bytes to copy
 * Return: address of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && *(dest + j))
	{
		*(dest + j) = *(src + j);
		j++;
	}
	while (j < n)
	{
		*(dest + j) = '\0';
		j++;
	}
	return (dest);
}
