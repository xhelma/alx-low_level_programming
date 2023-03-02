#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: a string.
 * @s2: a string.
 *
 *
 * Return: an integer.
 */




int _strcmp(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	int i, j, k;

	for (i = 0; s1[i]; i++)
		s1_len++;
	for (j = 0; s2[j]; j++)
		s2_len++;
	for (k = 0; k < s1_len + 1; k++)
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
	}
	return (0);

}
