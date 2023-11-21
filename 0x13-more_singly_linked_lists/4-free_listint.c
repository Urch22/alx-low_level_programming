#include "lists.h"
/**
 * free_listint - Function that frees a listint_t list
 * @head: Function parameter
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}
