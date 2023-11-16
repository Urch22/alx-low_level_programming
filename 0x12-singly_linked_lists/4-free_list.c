#include "lists.h"
/**
 * free_list - Function that frees a list_t list
 * @head: Function parameter
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
