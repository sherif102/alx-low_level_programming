#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: word separator
 * @n: number of argument parsed
 * Return: success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *z;
	va_list sp;

	va_start(sp, n);

	for (x = 0; x < n; x++)
	{
		z = va_arg(sp, char *);

		if (z == NULL)
			printf("(nil)");
		else
			printf("%s", z);

		if ((x < (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(sp);
}
