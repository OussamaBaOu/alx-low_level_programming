#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number
 * Return - void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int j;

	va_start(i, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(i, int));
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(i);
}
