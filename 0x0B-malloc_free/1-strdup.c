#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int b;
	int c;

	c = 0;
	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;
	a = malloc(sizeof(char) * (b + 1));
	if (a == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		a[c] = str[c];
	return (a);
}
