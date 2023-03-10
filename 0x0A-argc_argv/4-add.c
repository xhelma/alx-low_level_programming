#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * @argc: argunemt count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 *         Always 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *p;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if ((strtol(argv[i], &p, 10)) == 0 || (*p != '\0'))
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
