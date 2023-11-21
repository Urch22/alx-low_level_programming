#include "lists.h"
/**
 * free_listp - Function that prints a listint_t linked list
 * @head: Function parameter
 * Return: Number of nodes in the list
 */
void free_listp(listp_t **head)
{
	listp_t *tmp;
	listp_t *node;

	if (head != NULL)
	{
		node = *head;
		while ((tmp = node) != NULL)
		{
			node = node->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: Function parameter
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listp_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (node);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}

	free_listp(&ptr);
	return (node);
}
