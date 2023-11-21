#include "lists.h"
/**
 * print_listint - Function that prints all
 * the elements of a listint_t list
 * @h: Function parameter
 *
 * Return: The numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node1 = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node1++;
	}
	return (node1);
}
