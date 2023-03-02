#include "main.h"

/**
 * cap_string - a function that changes all lowercase letters
 *                  of a string to uppercase.
 *
 * @s: a string.
 *
 *
 * Return: @s in uppercase.
 */


char *cap_string(char *s)
{
	int i, j;
	char separator[14] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i]; i++)
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
