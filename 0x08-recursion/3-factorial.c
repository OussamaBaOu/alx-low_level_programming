#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: number to return
 * Return: factorial n
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
