#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @src: the string to be appended from.
 * @dest: the string to append to.
 * @n: number of bytes from @src to be appended.
 *
 * Return: @dest.
 */

char *_strncat(char *dest, char *src, int n)
{

	int dest_len = 0;
	int i, j;

	for (i = 0; dest[i]; i++)
		dest_len++;
	for (j = 0; j < n && src[j]; j++)
		dest[dest_len + j] = src[j];
	dest[dest_len + j] = '\0';
	return (dest);

}
