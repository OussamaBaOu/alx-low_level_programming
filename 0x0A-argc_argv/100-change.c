#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the number of coins
 * to make change for the amount of money
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	c = 0;
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; b < 5 && a >= 0; b++)
	{
		while (a >= coins[b])
		{
			c++;
			a -= coins[b];
		}
	}
	printf("%d\n", c);
	return (0);
}
