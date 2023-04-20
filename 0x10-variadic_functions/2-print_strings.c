#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of args.
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	if (separator == NULL)
		separator = "";
	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n - 1; i++)
		{
			s = va_arg(args, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
			printf("%s", separator);
		}
		s = va_arg(args, char *);
		if (s != NULL)
			printf("%s\n", s);
		else
			printf("(nil)\n");
		va_end(args);
	}
}
