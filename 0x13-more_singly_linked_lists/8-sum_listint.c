#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of linked list
 * Return: sum of all data and 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
