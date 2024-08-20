#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - print a list in safe version
 * @head: parsed head
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *temp = head;

	while (temp != NULL && temp->next != head)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		node_count++;

		if ((temp->next >= temp) || (temp->next == head))
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			exit(98);
		}
		temp = temp->next;
	}

	return (node_count);
}
