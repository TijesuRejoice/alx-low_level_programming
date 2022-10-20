#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t lent;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (lent = 0; str[lent]; lent++)
		;

	new->len = lent;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
