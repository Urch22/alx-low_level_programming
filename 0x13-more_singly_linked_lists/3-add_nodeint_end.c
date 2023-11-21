#include "lists.h"
/**
 * add_nodeint_end - Function that adds a
 * new node at the end of a listint_t list
 * @head: Function parameter 1
 * @n: Function parameter 2
 * Return: The address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	else
		*head = new;
	return (new);
}
