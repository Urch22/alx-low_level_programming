#include "main.h"
/**
 * rev_string -  function that reverses a string.
 * @s: Function parameter
 * Return: reverses
 */
void rev_string(char *s)
{
	char rv = s[0];
	int x = 0;
	int y;

	while (s[x] != '\0')
		x++;
	for (y = 0; y < x; y++)
	{
		x--;
		rv = s[y];
		s[y] = s[x];
		s[x] = rv;
	}
}
