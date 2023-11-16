#include "lists.h"
/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: Function parameter
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
