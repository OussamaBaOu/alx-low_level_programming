#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer
 * Return: number of nodes
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	a = 0;
	if (h == NULL)
		return (a);
	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
