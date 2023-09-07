#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * Parameters:
 * @s: Function parameter 1
 * @b: Function parameter 2
 * @n: Function parameter 3
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * Parameters:
 * @nmemb: Function parameter 1
 * @size: Function parameter 2
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
