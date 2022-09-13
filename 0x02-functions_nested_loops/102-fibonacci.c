#include <stdio.h>

/**
 * main - prints first 50 Fibonicci numbers,separated by comma then space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			putchar("\n");
		else
			putchar(' ');
	}
	return (0);
}
