#include "lists.h"
/**
 * list_len - calculate the number of elements in the list
 * @h: parsed list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		x++;
		temp = temp->next;
	}

	return (x);
}
