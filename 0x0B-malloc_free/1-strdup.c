#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated memory space
 * @str: new string
 * Return: pointer to string if success otherwise NULL
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int x = 0;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	s = malloc(sizeof(char) * (x + 1));
	if (s == NULL)
		return (NULL);

	x = 0;

	while (str[x] != '\0')
	{
		*(s + x) = str[x];
		x++;
	}
	return (s);
}
