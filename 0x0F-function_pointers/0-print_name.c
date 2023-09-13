#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * Parameters:
 * @name: Function parameter 1
 * @f: Function parameter 2
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
