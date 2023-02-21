#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day
 *                    of Jack Bauer, starting from 00:00 to 23:59
 *
 *
 *
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(58);
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar(10);
		}
	}

}
