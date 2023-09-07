#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * Parameters:
 * @ptr: Function parameter 1
 * @old_size: Function parameter 2
 * @new_size: Function parameter 3
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *p2;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p1 = malloc(new_size);
	if (!p1)
		return (NULL);
	p2 = ptr;
	if (new_size < old_size)
	{
		for (k = 0; k < new_size; k++)
			p1[k] = p2[k];
	}
	if (new_size > old_size)
	{
		for (k = 0; k < old_size; k++)
			p1[k] = p2[k];
	}
	free(ptr);
	return (p1);
}
