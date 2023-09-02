#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * Parameters:
 * @s: Function parameter 1
 * @b: Function parameter 2
 * @n: Function parameter 3
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
