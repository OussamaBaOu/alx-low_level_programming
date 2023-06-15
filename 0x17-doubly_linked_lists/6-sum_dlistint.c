#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list.
 * @head: pointer
 * Return: if the list is empty, return 0
 **/

int sum_dlistint(dlistint_t *head)
{
	long int a;
	dlistint_t *b;

	a = 0;
	if (head == NULL)
		return (a);
	b = head;
	while (b)
	{
		a += b->n;
		b = b->next;
	}
	return (a);
}
