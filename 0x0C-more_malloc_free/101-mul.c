#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _is_zero - determines if a numnber is zero
 * @argv: argument vector
 * Return: no return
 */
void _is_zero(char *argv[])
{
	int i, n1 = 1, n2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			n1 = 0;
			break;
		}
	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			n2 = 0;
			break;
		}
	if (n1 == 1 && n2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}
/**
 * _initialize_array - set memory to zero in a new array
 * @arr: char array
 * @len: array length
 * Return: pointer of a char array
 */
char *_initialize_array(char *arr, int len)
{
	int i;

	for (i = 0; i < len; i++)
		arr[i] = '0';
	arr[len] = '\0';
	return (arr);
}

/**
 * _checknum - determines length of the number
 * checks if number is in base 10
 * @argv: arguements vector
 * @n: array row
 * Return: length of the number
 */
int _checknum(char *argv[], int n)
{
	int ln;

	for (ln = 0; argv[n][ln]; ln++)
	{
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (ln);
}

/**
 * main - entry point
 * program that multiplies two positive numbers
 * @argc: arguements count
 * @argv: arguements vector
 * Return: success
 */
int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = _checknum(argv, 1), ln2 = _checknum(argv, 2);
	_is_zero(argv), lnout = ln1 + ln2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _initialize_array(nout, lnout);
	k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = ln1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = _initialize_array(nout, lnout);
			k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}

