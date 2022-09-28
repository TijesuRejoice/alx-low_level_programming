#include "main.h"

/**
 * str_length - returns length of string
 * @s: string
 * Return: the length of a string
 */
int str_length(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += str_length(s + len);
	}
	return (len);
}
/**
 * check_palindrome - checks if string is palindrome
 * @s: string
 * @len: length of s
 * @index: index of string to be checked
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}
/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to be used
 * Return: 1 if s is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = str_length(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}
