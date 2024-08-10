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
	int i;
	double f;
	char *s, *es = "\n";
	int x = 0;
	va_list ap;

	va_start(ap, format);
	while (format && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				printf("%s", (s != NULL) ? s : "(nil)");
				break;
			default:
				x++;
				continue;
		}
		if (*(format + (x + 1)) != '\0')
			printf(", ");
		x++;
	}
	printf("%s", (format != NULL) ? es : "(nil)\n");
	va_end(ap);
}
