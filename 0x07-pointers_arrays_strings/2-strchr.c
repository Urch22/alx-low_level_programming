#include "main.h"
/**
 * _strchr -  a function that locates a character in a string
 * Parameters:
 * @s: Function parameter 1
 * @c: Function parameter 2
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int j;

	j = 0;
	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
