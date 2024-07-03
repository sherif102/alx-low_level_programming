#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main program
 * @argc: argument numbers
 * @argv: list of arguments
 * Return: success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
