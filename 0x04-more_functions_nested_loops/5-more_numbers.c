#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 *                  followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar('0' + c / 10);
			_putchar('0' + c % 10);
		}
		_putchar(10);
	}

}
