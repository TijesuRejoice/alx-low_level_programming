#include "main.h"

/**
 * print_sign - return 0 if letter is not lowercase and 1 if letter is lowercase
 *
 * @n: number to check
 * Return: 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return ('-1');
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
