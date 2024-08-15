#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees the memory allocated in a list
 * @head: parsed lists;
 * Return: success
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		head = head->next;
		free(temp);
	}
}
