#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees list
 * @head: parsed head
 * Return: success
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	free(head);
	if (head != NULL)
	{

		while (temp != NULL)
		{
			temp = temp->next;
			free(temp);
		}
	}
}
