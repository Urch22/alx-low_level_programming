#include "main.h"
/**
 * puts2 -  function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: Function parameter
 * Return: Print
 */
void puts2(char *str)
{
	int j;

	j = 0;

	for (; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}
