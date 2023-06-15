#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer
 * @index: index of the node starting from 0
 * Return: if the node does not exist, return NULL
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;
	dlistint_t *b;

	a = 0;
	if (head == NULL)
		return (NULL);
	b = head;
	while (b)
	{
		if (index == a)
			return (b);
		a++;
		b = b->next;
	}
	return (NULL);
}
