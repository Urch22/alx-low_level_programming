#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _is_zero - determines if any number is zero
 * @argv: Function parameter
 * Return: 0
 */
void _is_zero(char *argv[])
{
	int i, j = 1, k = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
		j = 0;
			break;
		}
	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			k = 0;
			break;
		}
	if (j == 1 || k == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set memery to zero in a new array
 * @ar: Function parameter 1
 * @lar:Function parameter 2
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int lar)
{
	int k = 0;

	for (k = 0; k < lar; k++)
		ar[k] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: Function parameter 1
 * @n: Function parameter 2
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
	int k;

	for (k = 0; argv[n][k]; k++)
		if (!isdigit(argv[n][k]))
		{
			printf("Error\n");
			exit(98);
		}
	return (k);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: Function parameter 1
 * @argv: Function parameter 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add, addl, i, j, k, ca;
	char *p;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = _checknum(argv, 1), ln2 = _checknum(argv, 2);
	_is_zero(argv), lnout = ln1 + ln2, p = malloc(lnout + 1);
	if (p == NULL)
		printf("Error\n"), exit(98);
	p = _initialize_array(p, lnout);
	k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (p[k] - '0') + addl;
				if (add > 9)
					p[k - 1] = (add / 10) + '0';
				p[k] = (add % 10) + '0';
			}
			i = ln1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (p[0] != '0')
				break;
			lnout--;
			free(p), p = malloc(lnout + 1), p = _initialize_array(p, lnout);
			k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (p[k] - '0') + addl;
			addl = add / 10, p[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", p);
	return (0);
}
