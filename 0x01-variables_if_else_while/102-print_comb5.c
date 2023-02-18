#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (j > i)
			{
				if (i < 10)
					putchar('0');
				putchar('0' + i);
				putchar(' ');
				if (j < 10)
					putchar('0');
				putchar('0' + j);
				if (i == 98)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
