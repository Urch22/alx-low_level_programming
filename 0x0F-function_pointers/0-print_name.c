#include "function_pointers.h"
/**
 * print_name - Function that prints a name
 * @name: Function parameter 1
 * @f: Function parameter 2
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
