#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string on success and NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *sp;
	unsigned int x = 0;
	unsigned int y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	sp = malloc((x + y + 1) * sizeof(char));
	if (sp == NULL)
		return (NULL);

	x = y = 0;
	while (s1[x] != '\0')
	{
		*(sp + y) = s1[x];
		x++;
		y++;
	}
	x = 0;
	while (s2[x] != '\0')
	{
		*(sp + y) = s2[x];
		x++;
		y++;
	}
	*(sp + (y)) = '\0';
	return (sp);
}
