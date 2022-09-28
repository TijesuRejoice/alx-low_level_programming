#include "main.h"

/**
 * _strpbrk - searches a string for any of a sort of bytes
 * @s: first string
 * @accept: second string
 * Return: pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
