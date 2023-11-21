#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns
 * the nth node of a listint_t linked list
 * @head: Function parameter 1
 * @index: Function parameter 2
 * Return: If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
