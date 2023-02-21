#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number..
 *
 * @n: the integer.
 *
 * Return: the value of the last digit of @n.
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
		r = r * -1;
	_putchar('0' + r);
	return (r);
}
