#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: source address
 * @to: target address
 * Return: Nil
 */
void set_string(char **s, char *to)
{
	*s = to;
}
