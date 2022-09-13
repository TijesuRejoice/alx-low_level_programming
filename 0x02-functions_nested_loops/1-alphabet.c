#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 *
 * Description - prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	void print_alphabet(void);
	{
		int letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		return (0);
}
