#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * Parameters:
 * @head: Function parameter 1
 * @str: Function parameter 2
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ch;
	unsigned int len = 0;

	while (str[len])
		len++;
	ch = malloc(sizeof(list_t));
	if (!ch)
		return (NULL);
	ch->str = strdup(str);
	ch->len = len;
	ch->next = (*head);
	(*head) = ch;
	return (*head);
}
