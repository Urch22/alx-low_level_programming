#include "main.h"
#include <stdio.h>
/**
 * _strncat - function that concatenates two strings
 * parameters:
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int c;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[m] = src[c];
		m++;
		c++;
	}
	dest[m] = '\0';
	return (dest);
}
