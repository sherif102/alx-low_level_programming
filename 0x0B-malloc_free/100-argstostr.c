#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: arguments number
 * @av: arguments
 * Return: pointer to the concatenated string or NULL otherwise
 */

char *argstostr(int ac, char **av)
{
	int x, y, i;
	char *ps;

	x = y = i = 0;

	if (ac < 1 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			i++;
		i++;
		x++;
	}
	x = 0;
	y = 0;

	ps = malloc((i + 1) * sizeof(char));
	if (ps == NULL)
		return (NULL);

	i = 0;
	while (x < ac)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*(ps + i) = av[x][y];
			i++;
		}
		*(ps + i) = '\n';
		x++;
		i++;
	}
	*(ps + i) = '\0';

	return (ps);
}
