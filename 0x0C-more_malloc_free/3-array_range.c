#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * Parameters:
 * @min: Function parameter 1
 * @max: Function parameter 2
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *p;
	int s, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (s = 0; min <= max; s++)
		p[s] = min++;
	return (p);
}
