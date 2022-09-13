#include "main.h"

/**
 * _islower - prints the alphabets in lowercase
 * @c: contains value to be compared
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
