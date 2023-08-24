#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: Parameter 1
 * Return: str
 */
char *string_toupper(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		str[j] = toupper(str[j]);
		j++;


	}
	return (str);
}
