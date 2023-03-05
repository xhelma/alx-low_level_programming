#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 *
 *
 * @s: a string.
 *
 *
 * Return: @s encoded.
 */


char *rot13(char *s)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alphabet[j]; j++)
		{
			if (s[i] == alphabet[j])
			{
			s[i] = rot13_alpha[j];
			break;
			}
		}
	}

	return (s);
}

