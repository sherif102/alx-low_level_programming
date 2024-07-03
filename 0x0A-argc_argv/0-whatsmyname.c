#include <stdio.h>

/*
 * main - the main function
 * @argc: number of arguments
 * @argv: arguments array
 * return: Success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
