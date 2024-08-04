#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: integer size to be copied in s2
 * Return: pointer to the new copied string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int z = 0;
	char *sp;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[y] != '\0')
		y++;
	while (s2[z] != '\0')
		z++;
	if (n >= z)
		n = z;

	sp = malloc((y + n + 1) * sizeof(n));
	if (sp == NULL)
		return (NULL);

	while (s1[x] != '\0')
	{
		sp[x] = s1[x];
		x++;
	}
	y = 0;

	while (y < n)
	{
		sp[x] = s2[y];
		x++;
		y++;
	}

	sp[x] = '\0';
	return (sp);
}
