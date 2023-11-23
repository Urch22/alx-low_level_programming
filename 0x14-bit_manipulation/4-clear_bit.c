#include "main.h"
/**
 * clear_bit - Function that sets the value of
 * a bit to 0 at a given index
 * @n: Function parameter 1
 * @index: Function parameter 2
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;

	if (*n & k)
		*n ^= k;

	return (1);
}
