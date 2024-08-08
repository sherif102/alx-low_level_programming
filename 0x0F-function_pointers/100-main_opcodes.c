#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of the main function
 * @argc: argument number
 * @argv: argument array
 * Return: success
 */
int main(int argc, char **argv)
{
	unsigned char *pt;
	unsigned int x;

	pt = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < atoi(argv[1]); x++)
	{
		printf("%02x", pt[x]);

		if (x != (atoi(argv[1]) - 1))
			printf(" ");
	}

	printf("\n");

	return (0);
}
