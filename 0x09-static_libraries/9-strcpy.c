#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * Parameters:
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int k = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; k < l ; k++)
	{
		dest[k] = src[k];
	}
	dest[l] = '\0';
	return (dest);
}
