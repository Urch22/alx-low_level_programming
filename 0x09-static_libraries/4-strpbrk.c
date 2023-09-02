#include "main.h"
/**
 * _strpbrk - Entry point
 * Parameters:
 * @s: Function parameter 1
 * @accept: Function parameter 2
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
