#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * Parameters:
 * @head: Function parameter 1
 * @str: Function parameter 2
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ch;
	list_t *link = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	ch = malloc(sizeof(list_t));
	if (!ch)
		return (NULL);
	ch->str = strdup(str);
	ch->len = len;
	ch->next = NULL;
	if (*head == NULL)
	{
		*head = ch;
		return (ch);
	}
	while (link->next)
		link = link->next;
	link->next = ch;
	return (ch);
}
