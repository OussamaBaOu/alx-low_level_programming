#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	char *str;
	unsigned int b;

	va_start(a, n);
	for (b = 0; b < n; b++)
	{
		str = va_arg(a, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
