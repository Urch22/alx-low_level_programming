#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: Function parameter
 * Return: length
 */
int _strlen(char *s)
{
	int j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}
