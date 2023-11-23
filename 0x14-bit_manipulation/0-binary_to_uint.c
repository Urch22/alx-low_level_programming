#include "main.h"
/**
 * binary_to_uint - Function that converts a binary number
 * to an unsigned int
 * @b: Function paramete
 * Return: The converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k;
	int len, b_two;

	if (!b)
		return (0);

	k = 0;

	for (len = 0; b[len] != '\0'; len++)
	continue;

	for (len--, b_two = 1; len >= 0; len--, b_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			k += b_two;
		}
	}

	return (k);
}
