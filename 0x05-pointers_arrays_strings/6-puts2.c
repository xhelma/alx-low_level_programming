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
	for (; *str > 0; str = str + 2)
	{
		_putchar(*str);
	}
	_putchar(10);
}
