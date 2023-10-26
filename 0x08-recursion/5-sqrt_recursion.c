#include "main.h"

int actual_sqrt_recursion(int n, int  i);

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: Function parameter
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursion to fine the natural
 * square root of a number
 * @n: Function parameter 1
 * @x: Function parameter 2
 */
int actual_sqrt_recursion(int n, int  i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (actual_sqrt_recursion(n, i + 1));
}
