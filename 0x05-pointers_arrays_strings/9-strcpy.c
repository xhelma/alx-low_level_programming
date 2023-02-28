#include "main.h"


/**
 * _strcpy - a function that  copies the string pointed to by @src,
 *           including the terminating null byte (\0),to the buffer
 *           pointed to by @dest.
 *
 * @src: the string to copy.
 *
 * @dest: the string to copy into.
 *
 * Return: the pointer to @dest.
 *
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*(dest + 1) = '\0';
	dest = p;

	return (dest);
}
