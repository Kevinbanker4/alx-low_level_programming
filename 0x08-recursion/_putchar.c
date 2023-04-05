#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints  the character c
 * @c:  character to print
 *
 * Return: give  success 1.
 * show  error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
