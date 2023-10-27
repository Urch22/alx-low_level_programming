#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: Function parameter 1
 * @c: Function parameter 2
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
