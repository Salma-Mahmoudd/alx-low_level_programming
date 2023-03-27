#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: value to be evaluate.
 * Return: int of length.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
