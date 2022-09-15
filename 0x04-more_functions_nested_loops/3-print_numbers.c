#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
