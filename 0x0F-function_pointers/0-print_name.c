#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints name
 * @name: name passed
 * @f: function pointer
 * Return: success
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
