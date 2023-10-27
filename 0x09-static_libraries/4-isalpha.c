#include "main.h"
/**
 * _isalpha - Check if character is a alphabet character
 * @c: Function parameter
 * Return: 1 if letter, lowercase or uppercase, and 0 if it is not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
