#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees all members in a list
 * @h: head parsed
 * Return: size of the elements freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *next = NULL;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		node_count++;
		next = (*h)->next;

		if (*h <= next)
		{
			free(*h);
			*h = NULL;
			return (node_count);
		}
		free(*h);
		*h = next;
	}
	return (node_count);
}
