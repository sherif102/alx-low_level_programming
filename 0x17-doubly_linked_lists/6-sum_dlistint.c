#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all the data in the list
 * @head: head parsed
 * Return: calculated sum or 0 if empty list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
