#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: Function parameter
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t siz = 0;

	while (h)
	{
		siz++;
		h = h->next;
	}
	return (siz);
}
