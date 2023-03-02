#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @src: the string to be appended.
 * @dest: the string to append to.
 *
 *
 * Return: @dest.
 */




char *_strcat(char *dest, char *src)
{

	int dest_len = 0;
	int i, j;

	for (i = 0; dest[i]; i++)
		dest_len++;
	for (j = 0; src[j]; j++)
		dest[dest_len + j] = src[j];
	dest[dest_len + j] = '\0';
	return (dest);

}
