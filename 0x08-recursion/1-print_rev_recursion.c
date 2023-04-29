#include "main.h"
/**
 * _print_rev_recursion - to print a string in reverse.
 * @s: given string
 * Return: Nothing
 **/
void _print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(s + 1);
	s -= 1;
	putchar(*s);
}
