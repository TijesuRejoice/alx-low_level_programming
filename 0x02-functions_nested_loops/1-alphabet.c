#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - the function that prinits a to z in lowercase
 *
 * Description - prints the alphabet in lowecase in a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
