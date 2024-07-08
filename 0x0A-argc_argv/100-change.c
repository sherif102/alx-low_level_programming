#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: argument number
 * @argv: argument list
 * Return: success
 */

int main(int argc, char **argv)
{
	int v, x = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	v = atoi(argv[1]);

	if (v < 0)
		printf("0\n");
	if (v >= 25)
	{
		x += v / 25;
		v = v % 25;
	}
	if (v >= 10 && v < 25)
	{
		x += v / 10;
	v = v % 10;
	}
	if (v >= 5 && v < 10)
	{
		x += v / 5;
		v = v % 5;
	}
	if (v >= 2 && v < 5)
	{
		x += v / 2;
		v = v % 2;
	}
	if (v == 1)
		x += 1;

	printf("%d\n", x);

	return (0);
}
