#include <stdio.h>

/**
 * main - main function used
 * @argc: number of arguments
 * @argv: arguments array list
 * Return: success
 */

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", argc - 1);

	return (0);
}
