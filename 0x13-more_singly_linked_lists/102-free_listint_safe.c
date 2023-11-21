#include "lists.h"
/**
 * free_listp2 - Function that frees a listint_t list
 * @head: Function parameter
 * Return: The size of the list that was free’d
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list
 * @h: Function parameter
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	listp_t *ptr, *new, *add;
	listint_t *len;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&ptr);
				return (node);
			}
		}

		len = *h;
		*h = (*h)->next;
		free(len);
		node++;
	}

	*h = NULL;
	free_listp2(&ptr);
	return (node);
}
