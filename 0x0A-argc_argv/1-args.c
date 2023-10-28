#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: Function parameter 1
 * @argv: Function parameter 2
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
