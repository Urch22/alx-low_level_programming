#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: Function parameter
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t siz = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		siz++;
	}
	return (siz);
}
