#include <stdio.h>
/**
 * main- is the entry point for the program
 * Return: zero if no error, non-0 value if errors
 */
int main(void)
{
	printf("Size of a char : % i byte(s)\n”, sizeof(char));
	printf("Size of an int : % i byte(s)\n”, sizeof(int));
	printf("Size of a long int : % i byte(s)\n”, sizeof(long int));
	printf("Size of a long long : % i byte(s)\n”, sizeof(long long int));
	printf("Size of a float : % i byte(s)\n”, sizeof(float));
	return (0);
}
