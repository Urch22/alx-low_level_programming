#include "main.h"

int actual_sqrt_recursion(int n, int  x);

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
	else if (n == 0)
		return (0);
	else
		return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - recursion to fine the natural
 * square root of a number
 * @n: Function parameter 1
 * @x: Function parameter 2
 */
int actual_sqrt_recursion(int n, int  x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (actual_sqrt_recursion(n, x + 1));
}
