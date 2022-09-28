#include "main.h"

/**
 * is_prime - detects if an input number is prime
 * @n: input number
 * @i: iterator
 * Return: 1 or 0
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (is_prime(n, i + 1));
}
/**
 * is_prime_number - detects if an input number is prime
 * @n: input number
 * Return: 0 if n is not prime and 1 if n is a prime number
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
