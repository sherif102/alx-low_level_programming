#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sum all data in the list
 * @head: parsed head
 * Return: summation and 0 if the list if empty
 */
int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp->next != NULL)
	{
		n = n + (temp->n);
		temp = temp->next;
	}
	n = (temp->n) + n;
	return (n);
}
