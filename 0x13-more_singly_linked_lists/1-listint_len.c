#include "lists.h"
/**
 * listint_len - Function that returns the number
 * of elements in a linked listint_t list
 * @h: Function parameter
 * Return: The numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node1 = 0;

	while (h != NULL)
	{
		h = h->next;
		node1++;
	}
	return (node1);
}
