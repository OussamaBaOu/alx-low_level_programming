#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer
 * @str: new string to add
 * Return: the address of the new element, or NULL if it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	unsigned int len;

	len = 0;
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
