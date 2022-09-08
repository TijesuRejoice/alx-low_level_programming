#include <stdio.h>
/**
 * main- entry point
 * Return: 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %iu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %iu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %iu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %iu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %iu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

