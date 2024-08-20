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

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;

		if (head->next >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
		head = head->next;
	}
	return (node_count);
}
