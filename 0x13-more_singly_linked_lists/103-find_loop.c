#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in a listint_t linked list
 * @head: a pointer to the head of the listint_t
 * Return: address of the node where loop starts or NULL if failed
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}
		
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
