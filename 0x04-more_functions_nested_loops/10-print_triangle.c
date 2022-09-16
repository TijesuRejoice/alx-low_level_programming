#include "main.h"

/**
 * print_triangle - create triangle
 * @size: params
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - 1); j++)
		{
			_putchar(' ');
		}
		for (j--; j < size; j++)
		{
			_putchar(35);
		}
		if (i < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
