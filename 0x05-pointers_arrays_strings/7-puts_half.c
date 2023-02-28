#include "main.h"



/**
 * puts_half - a function that prints every other character of a string,
 *	   starting with the first character, followed by a new line
 *
 * @str: a string
 *
 *
 * Return: void.
 *
 */

void puts_half(char *str)
{
	char *p = str;
	int i = 0;
	int half;

	while (*p)
	{
		p++;
		i++;
	}
	
	if (i % 2 == 0)
		half = i / 2;
	else
		half = (i - 1) / 2;

	p = str;
	for (p = str + half; p <= str + i; p++)
	{
		_putchar(*p);
	}
	_putchar(10);
}
