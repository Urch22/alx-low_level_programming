#include "main.h"
/**
 * _memcpy - function that copies memory area
 * Parameters:
 * @dest: Function parameter 1
 * @src: Function parameter 2
 * @n: Function parameter 3
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y;

	x = 0;
	y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
