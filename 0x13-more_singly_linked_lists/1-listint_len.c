#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: parsed head;
 * Return: elements number
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
