#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - the main program
 * @argc: argument numbers
 * @argv: list of arguments
 * Return: success
 */

int main(int argc, char **argv)
{
	int x = 0;
	int v;
	int y;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (argc-- && (argc > 0))
	{
		for (v = 0; v < strlen(argv[argc]); v++)
		{
			y = argv[argc][v];

			if ((y < 48) || (y > 57))
			{
				printf("Error\n");
				return (1);
			}
		}
		x += atoi(argv[argc]);
	}
	printf("%d\n", x);
	return (0);
}
