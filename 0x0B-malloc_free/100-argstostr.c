#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all arguments of your program
 * @ac: Function parameter 1
 * @av: Function parameter 2
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int k, i, j, len;

	if (ac == 0)
		return (NULL);

	for (k = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}
	ptr = malloc((k + 1) * sizeof(char));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = j = len = 0; len < k; j++, len++)
	{
		if (av[i][j] == '\0')
		{
			ptr[len] = '\n';
			i++;
			len++;
			j = 0;
		}
		if (len < k - 1)
			ptr[len] = av[i][j];
	}
	ptr[len] = '\0';
	return (ptr);
}
