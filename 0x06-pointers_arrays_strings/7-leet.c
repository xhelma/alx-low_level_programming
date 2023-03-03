#include "main.h"

/**
 * leet - a function that that encodes a string into 1337.
 *
 *
 * @s: a string.
 *
 *
 * Return: @s leeted.
 */


char *leet(char *s)
{
	int i, j;
	char l33t[117] = {0};

	l33t[65] = l33t[97]  = '4';
	l33t[69] = l33t[101] = '3';
	l33t[79] = l33t[111] = '0';
	l33t[84] = l33t[116] = '7';
	l33t[76] = l33t[108] = '1';

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 117; j++)
		{
			if (s[i] == j && l33t[j] != 0)
				s[i] = l33t[j];
		}
	}
	return (s);

}
