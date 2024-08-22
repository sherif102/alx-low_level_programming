#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - finds loop in the list
 * @head: heard parsed
 * Return: address of where the loop is present
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *loop = head;

	while (temp != NULL)
	{
		temp = temp->next;

		if (loop != NULL)
		{
			loop = loop->next->next;
			if (loop == temp || loop == head)
				return (loop);
		}
	}
	return (NULL);
}
