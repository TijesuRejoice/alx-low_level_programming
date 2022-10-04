#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strdup;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strdup = (char *)malloc(sizeof(char) * (i + 1));
	if (strdup == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		strdup[j] = str[j];
	return (strdup);
}
