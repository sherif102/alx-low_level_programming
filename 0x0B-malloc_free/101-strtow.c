#include "main.h"
#include <stdlib.h>
/**
 * strtow - split strings to separate words
 * @str: supplied string
 * Return: pointer to the array of split strings
 */


char **strtow(char *str)
{
	int i, j, u = 0, x = 0, cc = 0;
	char **sp;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] != ' ') && (str[i + 1] ==  ' ' || '\0'))
			u++;
	}

	sp = malloc((u + 1) * sizeof(char *));
	if (sp == NULL || u == 0)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != ' ') && ((str[i - 1] == ' ') || i == 0))
		{
			j = i;
			for (cc = 0; (str[j] != ' ' || '\0'); cc++)
				j++;

			sp[x] = malloc((cc + 1) * sizeof(char));
			if (sp[x] == NULL)
			{
				for (i = 0; i < x; i++)
					free(sp[i]);
				free(sp);
				return (NULL);
			}

			for (j = 0; j < cc; j++, i++)
				sp[x][j] = str[i];
			sp[x][j] = '\0';
			x++;
		}
		else
		{
			i++;
		}
	}
	sp[x] = NULL;

	return (sp);
}
