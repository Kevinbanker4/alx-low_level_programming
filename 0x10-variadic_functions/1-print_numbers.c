#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: string to be printed between  numbers.
 * @n: number of integers passed to the function.
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list no;
	unsigned int index;

	va_start(no, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(no, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(no);
}
