#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: hesd of a listint_t list
 * Return: the head node's data (n)
 * if the linked list is empty, return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	tmp = *head;
	if (*head == NULL)
		return (n);
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
