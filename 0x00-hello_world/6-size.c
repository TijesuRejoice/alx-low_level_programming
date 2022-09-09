#include <stdio.h>
/**
 * main- entry point
<<<<<<< HEAD
 * Return: always 0
 * Print to print the size of data type
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (sizeof(char)));
	printf("Size of an int: %d byte(s)\n", <sizeof(int)));
	printf("Size of a long int: %d byte(s)\n", (sizeof(long int)));
	printf("Size of a long long int: %d byte(s)\n", (sizeof(long long int)));
	printf("Size of a float: %d byte(s)\n", (sizeof(float)));
	return (0);
}


=======
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

>>>>>>> 2538c7dc87a10a9c23dcf655d7ce5b84be9cad56
