#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * Parameters:
 * @a: Function parameter 1
 * @size: Function parameter 2
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int n1;
	int n2;
	int k;

	n1 = 0;
	n2 = 0;

	for (k = 0; k < size; k++)
	{
		n1 = n1 + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		n2 += a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", n1, n2);
}
