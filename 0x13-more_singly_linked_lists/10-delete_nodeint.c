#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index of a linked list
 * @head: pointer to the first element
 * @index: index of the node
 * Return: 1 (Success), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *curr = NULL;
	unsigned int a;

	a = 0;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (a < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		a++;
	}
	curr = temp->next;
	temp->next = curr->next;
	free(curr);
	return (1);
}
