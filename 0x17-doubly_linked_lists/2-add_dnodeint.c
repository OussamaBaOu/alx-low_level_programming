#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer
 * @n: value
 * Return: the address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;

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
	(*head)->prev = a;
	a->next = *head;
	*head = a;
	return (a);
}
