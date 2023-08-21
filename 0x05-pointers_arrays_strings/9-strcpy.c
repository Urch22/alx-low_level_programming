#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * Parameters:
 * @dest: Function parameter 1
 * @src: Function parameter 2
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
