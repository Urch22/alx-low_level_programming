#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * Parameters:
 * @array: Function parameter 1
 * @size: Function parameter 2
 * @cmp: Function parameter 3
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
