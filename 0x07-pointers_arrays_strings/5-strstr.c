#include "main.h"
/**
 * _strstr -  a function that locates a substring
 * Parameters:
 * @haystack: Function parameter 1
 * @needle: Function parameter 2
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *p = needle;

		while (*j == *p && *p != '\0')
		{
			j++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
