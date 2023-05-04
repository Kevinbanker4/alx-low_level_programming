#include "main.h"
#include <unistd.h> /* for write function */

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success, 1
 *         on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
/* write the character to standard output */
	return (write(1, &c, 1));
}
