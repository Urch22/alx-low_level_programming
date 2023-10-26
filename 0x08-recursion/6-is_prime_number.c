#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number or not
 * @n: Function parameter
 * Return: 1 if n is prime number, 0 if not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - calculate if a number
 * is prime recursion
 * @n: Function parameter 1
 * @x: Function parameter 2
 * Return: 1 if n is prime number, 0 if not a prime number
 */
int actual_prime_number(int n, int x)
{
	if (n % x == 0)
		return (0);
	else if (x <= 1)
		return (1);
	else
		return (actual_prime_number(n, x - 1));
}
