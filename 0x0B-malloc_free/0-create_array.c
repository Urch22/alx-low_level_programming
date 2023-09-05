#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * Parameters:
 * @size: Function parameter 1
 * @c: Function parameter 2
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		str[k] = c;
	return (str);
}
