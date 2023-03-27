#include "main.h"

/**
 *_puts - prints a string, to stdout
 *@str: value to be evaluate.
 *Return: not.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str[l]);
		str++;
	}
	_putchar('\n');
}
