#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 *
 *
 * @s: a string.
 *
 *
 * Return: @s with capitalized words.
 */


char *cap_string(char *s)
{
	int i, j;
	char separator[14] = " \t\n,;.!?\"(){}";

	if (s[0] > 96 && s[0] < 123)
		s[0] -= ' ';
	for (i = 1; s[i]; i++)
	{
		for (j = 0; separator[j]; j++)
		{
			if (s[i] == separator[j])
			{
				if (s[i + 1] > 96 && s[i + 1] < 123)
				{
					s[i + 1] -= ' ';
					i++;
					break;
				}
			}
		}
	}
	return (s);

}
