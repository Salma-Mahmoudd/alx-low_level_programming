#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - reates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: specific char
 * Return: Returns a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);
	buffer = (char *)malloc(size);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
