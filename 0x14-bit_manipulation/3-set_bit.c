#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1
 * @n: A pointer to the number to modify
 * @index: The index of the bit to set to 1
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8) - 1)
	{
	return (-1);
	}

	*n |= (1 << index);
	return (1);
}
