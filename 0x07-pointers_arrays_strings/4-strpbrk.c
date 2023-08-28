#include "main.h"
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes
 * Prameters:
 * @s: Function parameter
 * @accept: Function parameter
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
				return (s);
		}
		s++;
	}
	return ('\0');
}
