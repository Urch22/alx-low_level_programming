#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse
 * followed by a new line
 * @s: Function parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
		k++;
	for (k = k - 1; k >= 0; k--)
		_putchar(s[k]);

	_putchar('\n');
}
