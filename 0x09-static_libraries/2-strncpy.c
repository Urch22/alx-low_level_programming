#include "main.h"
/**
 * _strncpy - copy a string
 * Parameters:
 * @dest: Function parameter 1
 * @src: Function parameter 2
 * @n: Function parameter 3
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
