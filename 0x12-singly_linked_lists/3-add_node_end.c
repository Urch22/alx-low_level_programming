#include "lists.h"
/**
 * add_node_end - Function that adds a new node
 * at the end of a list_t list
 * @head: Function parameter 1
 * @str: Function parameter 2
 * Return: NULL in case of failure
 * or address or the element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t len1;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (len1 = 0; str[len1]; len1++)
		continue;

	new->len = len1;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
