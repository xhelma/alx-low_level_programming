#include <stdio.h>
#include <stdlib.h>


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
	int cents = 0;
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("0\n");
		return (0);
	}

	if (money >= 25)
	{
		cents += money / 25;
		money  = money % 25;
	}
	if (money >= 10)
	{
		cents += money / 10;
		money  = money % 10;
	}
	if (money >= 5)
	{
		cents += money / 5;
		money  = money % 5;
	}
	if (money >= 2)
	{
		cents += money / 2;
		money  = money % 2;
	}
	cents += money;
	printf("%d\n", cents);
	return (0);
}
