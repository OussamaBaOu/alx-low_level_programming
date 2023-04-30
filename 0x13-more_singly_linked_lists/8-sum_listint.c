#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - returns the sum of all the data
 * of a linked list
 * @head: node
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int a;
	listint_t *temp;

	a = 0;
	temp = head;
	while (temp)
	{
		a += temp->n;
		temp = temp->next;
	}
	return (a);
}
