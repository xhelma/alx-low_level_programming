#include "main.h"



/**
 * print_rev - a function that prints a string,
 *             in reverse, followed by a new line.
 *
 * @s: a string
 *
 *
 * Return: void.
 *
 */

void  print_rev(char *s)
{
	char *p = s;

	while (*s)
		s++;
	for (; s >= p; s--)
		_putchar(*s);


	_putchar(10);
}
