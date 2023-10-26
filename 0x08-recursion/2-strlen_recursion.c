#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: Function parameter
 * Return: A length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
