#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check - checks string if there're digit
 * @str: array
 * Return: Always 0
 */
int check(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/**
 * main - Prints the program name
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;
	int int_str;
	int sum = 0;

	a = 1;
	while (a < argc)
	{
		if (check(argv[a]))
		{
			int_str = atoi(argv[a]);
			sum += int_str;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
