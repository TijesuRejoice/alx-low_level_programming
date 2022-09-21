#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 * Return: dest
 */
int _strcmp(char *s1, char *s2)

{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		*str_one++;
		*str_two++;
	}

	return (*str_one - *str_two);
}
