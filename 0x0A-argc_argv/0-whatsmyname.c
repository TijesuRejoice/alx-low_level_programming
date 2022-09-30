#include <stdio.h>
#include "main.h"
/**
 * main - prints its name, followed by a new line
 * @argc: number of command line arguements
 * @argv: array that contains prg command line arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
