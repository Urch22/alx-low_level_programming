#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that compares two strings
 * parameters:
 * @s1: Parameter 1
 * @s2: Parameter 2
 * Return: Difference
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}
