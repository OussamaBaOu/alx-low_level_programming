#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the node of a linked list
 * @head: first node in the linked list
 * @index: index of the node
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *temp = head;

	a = 0;
	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}
