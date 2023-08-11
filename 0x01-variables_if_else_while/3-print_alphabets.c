#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char Upper = 'A';

	while (lower  <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (Upper <= 'Z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);
}
