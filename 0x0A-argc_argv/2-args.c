#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: argument list
 * Return: success
 */

int main(int argc, char **argv)
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
