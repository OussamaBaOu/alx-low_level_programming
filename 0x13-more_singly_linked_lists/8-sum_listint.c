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
	int sum;
	listint_t *temp;

	a = 0;
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
