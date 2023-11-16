#include "lists.h"
/**
 * add_node - Function that adds a new node
 * at the beginning of a list_t list
 * @head: Function parameter 1
 * @str: Function parameter 2
 * Return: eturns the address to the new element or NULL
 * if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len1;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (len1 = 0; str[len1]; len1++)
		;

	new->len = len1;
	new->next = *head;
	*head = new;

	return (*head);
}
