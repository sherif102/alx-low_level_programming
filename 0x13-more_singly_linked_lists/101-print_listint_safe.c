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
	const listint_t *fast = head;

	while (temp != NULL && head != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;

		if (fast != NULL)
		{
			fast = fast->next->next;
			if (fast == temp || fast == head)
			{
				printf("-> [%p] %d\n", (void *)fast, fast->n);
				exit(98);
			}
		}
		node_count++;
	}
	return (node_count);
}
