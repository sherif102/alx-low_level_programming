#include <stdio.h>

/**
 * main - main function used
 * @argc: number of arguments
 * @argv: arguments array list
 * Return: Success
 */

int main(int argc, char **argv)
{
	int x = 0;

	while (argv[x])
		x++;

	x--;

	printf("%d\n", x);

	return (0);
}
