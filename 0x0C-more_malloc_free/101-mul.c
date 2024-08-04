#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - the main function
 * @argc: number of argument
 * @argv: argument array
 * Return: multiplied result of arg1 and arg2
 */
int main(int argc, char **argv)
{
	unsigned long int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (y = 0; argv[1][y] != '\0'; y++)
	{
		if (!isdigit(argv[1][y]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (y = 0; argv[2][y] != '\0'; y++)
	{
		if (!isdigit(argv[2][y]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	x = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", x);

	return (0);
}
