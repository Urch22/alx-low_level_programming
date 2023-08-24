#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that prints a buffer
 * parameters:
 * @b: Parameter 1
 * @size: Parameter 2
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int m, n, o;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		n = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (m = 0; m < 10; m++)
		{
			if (m < n)
				printf("%02x", *(b + o + m));
			else
				printf("  ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < n; m++)
		{
			int c = *(b + o + m);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
