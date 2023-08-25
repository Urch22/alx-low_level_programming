#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse string
 * @n: function parameter
 * Return: 0
 */
void rev_string(char *n)
{
	int j = 0;
	int k = 0;
	char c;

	while (*(n + j) != '\0')
	{
		j++;
	}
	j--;

	for (k = 0 ; k < j ; k++, j--)
	{
		c = *(n + k);
		*(n + k) = *(n + j);
		*(n + j) = c;
	}
}

/**
 * infinite_add - C program to add two numbers
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: pointer to storage
 * @size_r: buffer size
 * Return: pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, m = 0;
	int a = 0, b = 0, c = 0;

	while (*(n1 + j) != '\0')
		j++;
	while (*(n2 + k) != '\0')
		k++;
	j--;
	k--;
	if (k >= size_r || j >= size_r)
	{
		return (0);
	}
	while (k >= 0 || j >= 0 || i == 1)
	{
		if (j < 0)
			a = 0;
		else
			a = *(n1 + j) - '0';
		if (k < 0)
			b = 0;
		else
			b = *(n2 + k) - '0';
		c = a + b + i;
		if (c >= 10)
			i = 1;
		else
			i = 0;
		if (m >= (size_r - 1))
			return (0);
		*(r + m) = (c % 10) + '0';
		m++;
		k--;
		j--;
	}
	if (m == size_r)
		return (0);
	*(r + m) = '\0';
	rev_string(r);
	return (r);
}
