#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i - 1; j > 0; j--)
				_putchar(32);
			for (k = 0; k <= i; k++)
				_putchar(35);
			_putchar(10);
		}

	}
	else
		_putchar(10);
}
