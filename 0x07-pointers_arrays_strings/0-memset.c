#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * Parameters:
 * @s: Function parameter 1
 * @b: Function parameter 2
 * @n: Function parameter 3
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j;

	j = 0;
	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
