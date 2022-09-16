#include "main.h"

/**
 * print_line - draws straight line
 * @n: number of times the charatcer _ should be printed
 *
 * Return: n
 */
void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
