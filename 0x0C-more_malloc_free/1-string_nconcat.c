#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  function that concatenates two string
 * @s1: Function parameter 1
 * @s2: Function parameter 2
 * @n: Function parameter 3
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		ptr[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		ptr[len++] = s2[index];

	ptr[len] = '\0';
	return (ptr);
}
