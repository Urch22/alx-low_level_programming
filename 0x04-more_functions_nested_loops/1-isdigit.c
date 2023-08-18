#include "main.h"
/**
 * _isdigit - checking for a  digit
 * @c: Function parameters that will be examine
 * Return: 1 or 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= '0' &&  c <= '9')
		return (1);
	else
		return (0);
}
