#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: Function parameter 1
 * @argv: Function parameter 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cent, coins1 = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;
		coins1 += 1;
	}
	printf("%d\n", coins1);
	return (0);
}
