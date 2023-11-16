#include <stdio.h>

void __attribute__ ((constructor)) nmain()

/**
 * nmain - Function executed before main
 * Return: 0
 */
void bmain()
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
