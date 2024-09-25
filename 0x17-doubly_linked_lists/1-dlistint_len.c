#include "lists.h"

/**
 * dlistint_len - calculates the number of element in the list
 * @h: head parsed
 * Return: elements number
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp;

	if (h == NULL)
		return (n);
	temp = h;

	while (temp != NULL && temp->next != h)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
