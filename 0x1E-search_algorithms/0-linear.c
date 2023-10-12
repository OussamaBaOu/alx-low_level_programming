#include "search_algos.h"

/**
* linear_search - Searches for a value in an array of integers
* @array: pointer to first element
* @size: number of elements
* @value: value
* Return: first index or -1
**/

int linear_search(int *array, size_t size, int value)
{
	unsigned int a;
	int b = 0;

	if (array == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%u] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			b = 1;
			return (a);
		}
	}
	if (b != 1)
		return (-1);
	return (a);
}
