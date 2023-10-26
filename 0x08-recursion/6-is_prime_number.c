#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number or not
 * @n: Function parameter
 * Return: 1 if n is prime number, 0 if not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a number
 * is prime recursion
 * @n: Function parameter 1
 * @i: Function parameter 2
 * Return: 1 if n is prime number, 0 if not a prime number
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
