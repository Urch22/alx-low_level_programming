#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Function that concatenates two strings
 * @s1: Function parameter 1
 * @s2: Function parameter 2
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, k, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		continue;

	for (j = 0; s2[j] != '\0'; j++)
		continue;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		ptr[k] = s1[k];

	len = j;
	for (j = 0; j <= len; k++, j++)
		ptr[k] = s2[j];
	return (ptr);
}
