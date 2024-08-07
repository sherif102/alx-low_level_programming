#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - function pointer to the operator function
 * @s: operator passed
 * Return: returns pointer to the correct operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	opt_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};
	i = 0;

	while (ops[i].op != NULL)
	{
		if ((s != NULL) && (strcmp(s, ops[i].op) == 0))
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
