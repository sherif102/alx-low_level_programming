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
}/*
 * safe_list.c
 *
 *  Created on: Aug 20, 2024
 *      Author: hyper
 */


