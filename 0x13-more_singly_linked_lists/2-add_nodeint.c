#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of linked list
 * @head: double pointer
 * @n: new string to add
 * Return: the address of the new element, or NULL if it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
