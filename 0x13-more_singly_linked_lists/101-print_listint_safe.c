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
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (slow != NULL && slow->next != head)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;

		slow = slow->next;

		if ((fast != NULL) && (fast->next != NULL))
			fast = fast->next->next;
		else
			exit(98);

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}

	return (node_count);
}
