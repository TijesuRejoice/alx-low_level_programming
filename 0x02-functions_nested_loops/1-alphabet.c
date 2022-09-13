#include <stdio.h>

/**
 * print_alphabet - entry point
 *
 * Description - prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');

	return (0);
}
