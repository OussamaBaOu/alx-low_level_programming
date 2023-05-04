#include "main.h"
/**
 * flip_bits - returns the number of bits to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int c = 0;
	unsigned long int b;
	unsigned long int o = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		b = o >> a;
		if (b & 1)
			c++;
	}
	return (c);
}
