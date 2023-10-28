#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: Function parameter 1
 * @argv: Function parameter 2
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);
	return (0);
}
