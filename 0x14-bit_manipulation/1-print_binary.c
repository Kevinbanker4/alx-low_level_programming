#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
    if (n > 1) {
        /* recursively call the function with n right-shifted by 1 */
        print_binary(n >> 1);
    }

    /* print the least significant bit of n */
    _putchar((n & 1) ? '1' : '0');
}
