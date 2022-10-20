#ifndef _LISTS_H
#define _LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - singly linked lists
 * @str: string
 * @len: length of the string
 * next: points to the next node
 *
 * Description: singly linked list node structure project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

int _putchar(char c);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

void free_list(list_t *head);

list_t *add_node_end(list_t **head, const char *str);


#endif
