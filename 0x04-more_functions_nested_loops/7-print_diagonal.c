#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: function parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, j;

		for (k = 0; k < n; k++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == k)
					_putchar('\\');
				else if (j < k)
					putchar(' ');
			}
			_putchar('\n');
		}
	}
}
