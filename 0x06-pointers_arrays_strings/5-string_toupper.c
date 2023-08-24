#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: Parameter 1
 * Return: s
 */
char *string_toupper(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'Z')
			s[j] = s[j] - 32;
		j++;
	}
	return (s);
}
