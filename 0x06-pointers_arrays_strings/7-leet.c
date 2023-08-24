#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: Parameter
 * Return: s value
 */
char *leet(char *s)
{
	int m;
	int n;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (s[m] == s1[n])
			{
				s[m] = s2[n];
			}
		}
	}
	return (s);
}
