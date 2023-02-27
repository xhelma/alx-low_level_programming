#include "main.h"



/**
 * puts2 - a function that prints every other character of a string,
 *	   starting with the first character, followed by a new line
 *
 * @str: a string
 *
 *
 * Return: void.
 *
 */

void puts2(char *str)
{
	char *p = str;
	int i = 0;

	while (*p)
	{
		p++;
		i++;
	}

	p = str;
	for (; p < str + i - 1; p += 2)
	{
		_putchar(*p);
	}
	_putchar(10);
}
