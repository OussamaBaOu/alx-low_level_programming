#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer
 * @n: value
 * Return: the address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *b;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->prev = NULL;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	if ((*head)->next == NULL)
	{
		(*head)->next = a;
		a->prev = *head;
		return (a);
	}
	b = *head;
	while (b->next)
		b = b->next;
	b->next = a;
	a->prev = b;
	return (a);
}
