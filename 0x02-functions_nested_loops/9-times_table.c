#include "main.h"

/**
 * times_table - a function that prints the 9 times table,
 *		starting with 0.
 *
 *
 *
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{

			if (i * j < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar('0' + i * j);
				if (j != 9)
					_putchar(44);
			}
			else
			{
				_putchar(32);
				_putchar('0' + i * j / 10);
				_putchar('0' + i * j % 10);
				if (j != 9)
					_putchar(44);
			}
		}
		_putchar(10);
	}

}
