#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 * Parameters:
 * @a: Function parameter 1
 * @n: Function parameter 2
 * Reutrn: 0
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != n - 1)
			printf(", ");
	}
	printf("\n");
}
