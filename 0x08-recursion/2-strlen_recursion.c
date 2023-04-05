#include "main.h"
/**
 * _strlen_recursion - returns  length of  string.
 * @s:  string to be measured.
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s)
	{
		leng++;
		leng += _strlen_recursion(s + 1);
	}

	return (leng);
}
