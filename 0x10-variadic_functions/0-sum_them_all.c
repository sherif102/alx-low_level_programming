#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - return the sum of all arguments
 * @n: arguments number
 * Return: summation result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0;
	int x;

	va_list np;

	va_start(np, n);

	if (n == 0)
		return (0);

	for (x = 0; x < n; x++)
	{
		result += va_arg(np, int);
	}
	va_end(np);

	return (result);
}
