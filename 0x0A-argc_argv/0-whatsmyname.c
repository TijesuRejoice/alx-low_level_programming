#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @arcg: number of command line arguements
 * @argv: array that contains prg command line arguements
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
