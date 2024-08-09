#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: what to separate each number
 * @n: number of integer passed
 * Return: success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	va_list np;

	va_start(np, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(np, int));

		if (x < (n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(np);

	printf("\n");
}
