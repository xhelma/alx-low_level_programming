#include "main.h"



/**
 * rev_string - a function that reverses a string.
 *             
 * @s: a string
 *
 *
 * Return: void.
 *
 */

void rev_string(char *s)
{
	char *p = s;
	char *r;
	char rev[1000];

	r = rev;
	while (*p)
	{
		p++;
	}
	for (p = p - 1; p >= s; p--)
	{
		*r = *p;
		r++;
	}

	*r = '\0';
	r = rev;

	for (; *r != '\0'; r++)
	{
		*s = *r;
		s++;
	}
}
