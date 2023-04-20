#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i = 0, j = 0;

	va_start(args, format);
	while (format != NULL && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				i = 0;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				i = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				i = 0;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s  == NULL)
				{
					printf("(nil)");
					break;
				}
				i = 0;
				printf("%s", s);
				break;
			default:
				i = 1;
		}
		if (format[j + 1] != '\0' && i == 0)
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}
