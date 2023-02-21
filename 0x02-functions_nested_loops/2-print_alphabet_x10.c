#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times,
 *                      in lowercase, followed by a new line.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}

		_putchar(10);
	}
}
