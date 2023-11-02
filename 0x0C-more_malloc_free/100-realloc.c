#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a
 * memory block using malloc and free
 * @ptr: Function parameter 1
 * @old_size: Function parameter 2
 * @new_size: Function parameter 3
 * Return: ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
