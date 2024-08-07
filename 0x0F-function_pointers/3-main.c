#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program entry
 * @argc: number of arguments
 * @argv: argument array
 * Return: success
 */
int main(int argc, char **argv)
{
	int a, b, c;
	int (*gof)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	gof = get_op_func(argv[2]);

	if (gof == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = gof(a, b);

	printf("%d\n", c);

	return (0);
}
