#include "main.h"


/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: an integer
 *
 *
 * Return: the length of the string @s.
 *
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
		count++;

	return (count);
}
