#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * Parameters:
 * @array: Function parameter 1
 * @size: Function parameter 2
 * @action: Function parameter 3
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
