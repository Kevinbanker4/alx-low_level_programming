#include "main.h"

/**
 * flip_bits - Returns the number of bits that need to be flipped to convert
 *             one number to another.
 * @n: The initial number
 * @m: The final number
 *
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}

	return (count);
}
