#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - print strings
 * @format: argument format
 * Return: success
 */
void print_all(const char * const format, ...)
{
	char c;
	int i, t;
	double f;
	char *s;
	int x = 0;

	va_list ap;

	va_start(ap, format);

	while (*(format + x) != '\0')
	{
		t = *(format + x);
		if ((t == 'c' || t == 'i' || t == 'f' || t == 's'))
		{
			switch (*(format + x))
			{
				case 'c':
				{
					c = (char) va_arg(ap, int);
					printf("%c", c);
					break;
				}
				case 'i':
				{
					i = va_arg(ap, int);
					printf("%d", i);
					break;
				}
				case 'f':
				{
					f = va_arg(ap, double);
					printf("%f", f);
					break;
				}
				case 's':
				{
					s = va_arg(ap, char *);
					printf("%s", (s != NULL) ? s : "(nil)");
					break;
				}
				default:
					break;
			}

			if (*(format + (x + 1)) != '\0')
				printf(", ");
		}
		x++;
	}
	va_end(ap);
	printf("\n");
}
