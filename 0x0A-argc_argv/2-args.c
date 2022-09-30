#include <stdio.h>
#include "main.h"

/**
 * main - function that prints all arguemnts it receives
 * @argc: number of arguements supplied to the program
 * @argv: array of pointers to the arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
