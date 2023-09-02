#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * Function parameter:
 * @dest: Function parameter 1
 * @src: Function parameter 2
 * @n: Function parameter 3
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
