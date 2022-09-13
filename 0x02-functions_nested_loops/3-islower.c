#include "main.h"

/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (int c > 'a' && int c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
