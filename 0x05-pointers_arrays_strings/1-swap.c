#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * Parameters:
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
