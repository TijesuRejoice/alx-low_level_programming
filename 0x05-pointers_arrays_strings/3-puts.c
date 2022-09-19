#include "main.h"

/**
 * _puts - prints a string to stdout followed by a new lne
 * @str: params
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
