#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints @n elements of an array
 *	         of integers, followed by a new line.
 *
 * @n: size of the array.
 *
 * @a: an array.
 *
 * Return: void.
 *
 */

void  print_array(int *a, int n)
{
	int *p = a;

	for (; p < a + n; p++)
	{
		printf("%d", *p);
		if (p != a + n - 1)
			printf(", ");
	}

	printf("\n");
}
