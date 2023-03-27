#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int l = 0;
	int o;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (o = l; o > 0; o--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
