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
	int x = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (argc-- && (argc > 0))
	{
		if (!(atoi(argv[argc])))
		{
			printf("Error\n");
			return (1);
		}
		x += atoi(argv[argc]);
	}
	printf("%d\n", x);
	return (0);
}
