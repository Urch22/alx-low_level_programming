#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function that copies a string
 * parameteres:
 * @dest: Parameter 1
 * @src: Parameter 2
 * @n: Parameter 3
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
