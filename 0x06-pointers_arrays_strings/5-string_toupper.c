#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 *                  of a string to uppercase.
 *
 * @s: a string.
 *
 *
 * Return: @s in uppercase.
 */




char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] -= ' ';
	}
	return (s);

}
