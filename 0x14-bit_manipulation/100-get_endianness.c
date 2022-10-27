#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big endianness or 1 for little endianness
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
