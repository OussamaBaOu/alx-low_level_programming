#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > 63)
		return (-1);
	a = (n >> index) & 1;
	return (a);
}
