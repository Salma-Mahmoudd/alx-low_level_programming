#include "main.h"
/**
 * _puts_recursion - to print a string
 * @s: given string
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
