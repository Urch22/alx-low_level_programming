#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int k, j;

		for (k = 0; k < n;  k++)
		{
			if (n > 1)
				for (j = 0; j < k; j++)
				{
					_putchar(' ');
				}
			_putchar('\\');
			_putchar('\n');
		}

		if (n <= 0)
		{
			_putchar('\n');
		}
}
