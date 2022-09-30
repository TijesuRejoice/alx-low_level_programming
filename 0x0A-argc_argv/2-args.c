#include <stdio.h>

/**
 * main - function that prints all arguemnts it receives
 * @argc: number of arguements supplied to the program
 * @argv: array of pointers to the arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
