#include "lists.h"

/**
 * sum_listint - Calculates the sum of all th
 * data (n) of a listint_t list
 * @head: a pointer to the head of the listint_t list
 *
 * Return: 0 if list is empty or sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
