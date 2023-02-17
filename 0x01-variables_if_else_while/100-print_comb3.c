#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i == 9)
			break;
		for (j = 0; j <= 9; j++)
		{
			if (j > i)
				putchar(j);
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
