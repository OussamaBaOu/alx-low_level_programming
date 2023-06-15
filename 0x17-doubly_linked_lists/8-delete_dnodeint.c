#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer
 * @index: index starting from 0
 * Return: 1 if success, -1 if failure
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a;
	dlistint_t *b;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		b = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(b), b = NULL;
		return (1);
	}
	a = 1, b = (*head)->next;
	if (b)
	{
		while (b->next)
		{
			if (index == a)
			{
				b->prev->next = b->next;
				b->next->prev = b->prev;
				free(b), b = NULL;
				return (1);
			}
			a++, b = b->next;
		}
	}
	if (b && index == a)
	{
		b->prev->next = NULL;
		free(b);
		return (1);
	}
	return (-1);
}
