#include "main.h"
/**
 * print_most_numbers -  function that prints the numbers
 *
 * Return: 0 (Success)
 */
void print_most_numbers(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		if (k != 50)
		{
			if (k != 52)
			{
				_putchar(k);
			}
		}
	}
	_putchar('\n');
}
