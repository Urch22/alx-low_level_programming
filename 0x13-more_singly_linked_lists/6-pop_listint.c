#include "lists.h"
/**
 * pop_listint - Function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: unction parameter
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int new_node;
	listint_t *h;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	new_node = temp->n;

	h = temp->next;

	free(temp);

	*head = h;

	return (new_node);
}
