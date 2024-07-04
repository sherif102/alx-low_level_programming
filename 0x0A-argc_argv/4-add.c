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
	int v;
	char *y;

	while (argc-- && (argc > 0))
	{
		v = 0;
		y = argv[argc];

		while (y[v] != '\0')
		{
			if ((y[v] < 48) || (y[v] > 57))
			{
				printf("Error\n");
				return (1);
			}
			v++;
		}
		x += atoi(argv[argc]);
	}
	printf("%d\n", x);
	return (0);
}
