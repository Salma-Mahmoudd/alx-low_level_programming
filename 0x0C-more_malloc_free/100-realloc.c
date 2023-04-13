#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: of the allocated space for ptr
 * @new_size:  of the new memory block
 * Return: a pointer, or NULL if it fails.
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(sizeof(void *) * new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	tmp = malloc(sizeof(char *) * new_size);
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		tmp[i] = ((char *)ptr)[i];
	free(ptr);
	return (tmp);
}
