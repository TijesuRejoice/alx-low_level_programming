#include "main.h"

/**
 * strlen_no_wilds - returns string length, ignoring wildcard characters
 * @str: string to be measured
 * Return: length
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;
		index++;
		len += strlen_no_wilds(str + index);
	}
	return (len);
}
/**
 * iterate_wild - iterates through string until enc non-wildcard character
 * @wildstr: string to be iterated through
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}
/**
 * postfix_match - checks if string str matches ppostfix of another string
 * potentially containing wildcards
 * @str: string to be matched
 * @postfix: postfix
 * Return: If str and postfix are identical, a pointer to the null byte
 * otherwise - a pointer to te first unmatched character in postfix
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);
	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}
/**
 * wildcmp - compares two strings, considering wildcard characters
 * @s1: first string to be compared
 * @s2: second string, may contain wildcards
 * Return: if strings are considered identical, 1 or 0, if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s2 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
