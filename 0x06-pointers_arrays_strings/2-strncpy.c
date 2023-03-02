#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @src: the string to copy from.
 * @dest: the string to copy to.
 * @n: the number of bytes to copy.
 *
 * Return: @dest.
 */




char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
