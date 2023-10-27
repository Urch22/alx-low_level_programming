#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @n: Function parameter 1
 * Return: absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
