#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a list
 * @head: heard parsed
 * Return: success or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	size_t n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
