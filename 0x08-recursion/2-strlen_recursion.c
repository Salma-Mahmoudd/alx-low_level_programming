#include "main.h"
/**
 * _strlen_recursion - count the length of a string.
 * @s: given string
 * Return: length of a string.
 **/
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	return (count);
}
