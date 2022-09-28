#include "main.h"

/**
 * _sqrt - returns the natural square root of a number
 * @n: input number
 * @i: iterator
 * Return: square root or -1
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root
 * @n: input number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
