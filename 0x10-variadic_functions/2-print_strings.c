#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: separator is string to be printed between the strings.
 * @n: no of strings.
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int index;
	char *strng;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		strng = va_arg(strings, char *);
		if (strng == NULL)
			printf("(nil)");
		else
			printf("%s", strng);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
