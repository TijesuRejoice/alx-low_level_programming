#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}

