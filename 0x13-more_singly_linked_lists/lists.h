#ifndef SIZE_T
#define SIZE_T
#include <stddef.h>
#endif /* SIZE_T */

#ifndef LISTINT_S
#define LISTINT_S
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
#endif /* LISTINT_S */

#ifndef _PUTCHAR
#define _PUTCHAR
int _putchar(char c);
#endif /* _PUTCHAR */

#ifndef PRINT_LISTINT
#define PRINT_LISTINT
size_t print_listint(const listint_t *h);
#endif /* PRINT_LISTINT */

#ifndef LISTINT_LEN
#define LISTINT_LEN
size_t listint_len(const listint_t *h);
#endif /* LISTINT_LEN */

#ifndef ADD_NODEINT
#define ADD_NODEINT
listint_t *add_nodeint(listint_t **head, const int n);
#endif /* ADD_NODEINT */

#ifndef ADD_NODEINT_END
#define ADD_NODEINT_END
listint_t *add_nodeint_end(listint_t **head, const int n);
#endif /* ADD_NODEINT_END */

#ifndef FREE_LISTINT
#define FREE_LISTINT
void free_listint(listint_t *head);
#endif /* FREE_LISTINT */

#ifndef FREE_LISTINT2
#define FREE_LISTINT2
void free_listint2(listint_t **head);
#endif /* FREE_LISTINT2 */

#ifndef POP_LISTINT
#define POP_LISTINT
int pop_listint(listint_t **head);
#endif /* POP_LISTINT */

#ifndef GET_NODEINT_AT_INDEX
#define GET_NODEINT_AT_INDEX
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
#endif /* GET_NODEINT_AT_INDEX */

#ifndef SUM_LISTINT
#define SUM_LISTINT
int sum_listint(listint_t *head);
#endif /* SUM_LISTINT */

#ifndef INSERT_NODEINT_AT_INDEX
#define INSERT_NODEINT_AT_INDEX
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
#endif /* INSERT_NODEINT_AT_INDEX */

#ifndef INSERT_NODEINT_AT_INDEX
#define INSERT_NODEINT_AT_INDEX
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
#endif /* INSERT_NODEINT_AT_INDEX */

#ifndef DELETE_NODEINT_AT_INDEX
#define DELETE_NODEINT_AT_INDEX
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif /* DELTE_NODEINT_AT_INDEX */

#ifndef REVERSE_LISTINT
#define REVERSE_LISTINT
listint_t *reverse_listint(listint_t **head);
#endif /* REVERSE_LISTINT */
