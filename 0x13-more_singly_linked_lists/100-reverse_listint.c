#include "lists.h"
/**
 * reverse_listint - Function that reverses a listint_t linked list
 * @head: Function parameter
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *i;

	ptr = NULL;
	i = NULL;

	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = i;
	}
	*head = ptr;
	return (*head);
}
