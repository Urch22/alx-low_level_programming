#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: Function parameter 1
 * @max: Function parameter 2
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
