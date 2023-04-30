#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (!head || !*head)
		return (0);
	a = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (a);
}
