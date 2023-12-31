#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: Function parameter 1
 * @b: Function parameter 2
 * @n: Function parameter 2
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		*(s + k) =  b;

	return (s);
}
