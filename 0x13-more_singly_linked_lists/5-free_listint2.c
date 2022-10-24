#include "lists.h"

/**
 * free_listint2 - frees a listint_list
 * function sets head to NULL
 * @head: head to linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
