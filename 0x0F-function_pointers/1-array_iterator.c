#include "function_pointers.h"
/**
 * array_iterator - Function that executes a function
 * given as a parameter on each element of an array
 * @array: Function parameter 1
 * @size: Function parameter 2
 * @action: Function parameter 3
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
