#include "lists.h"
/**
 * free_listint2 - Function that frees a listint_t list
 * @head: Function parameter
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *node;

	if (head != NULL)
	{
		node = *head;
		while ((temp = node) != NULL)
		{
			node = node->next;
			free(temp);
		}
		*head = NULL;
	}
}
