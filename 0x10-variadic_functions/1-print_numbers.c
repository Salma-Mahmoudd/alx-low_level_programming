#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers in args
 * @separator: the string to be printed between numbers
 * @n: number of args.
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args:

	if (separator == NULL)
		separator = "";
	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(args, int));
			printf("%s", separator);
		}
		printf("%d\n", va_arg(args, int));
		va_end(args);
	}
}
