#include <stdlib.h>
#include "main.h"
/**
 * count_word - A function that splits a string into words
 * @s: Function parameter
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, i, j;

	flag = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}
	return (j);
}
/**
 * **strtow - splits a string into words
 * @str: Function parameter
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **ptr, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	ptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				ptr[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	ptr[k] = NULL;
	return (ptr);
}
