#include "main.h"
#include <stdio.h>

/**
 * char *_memset - function that fills memory with a constant byte
 * @char *s
 * @char b: constant byte
 * @unsigned int n: n bytes of the memory area pointed to by s
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
