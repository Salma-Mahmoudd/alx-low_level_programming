#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: no. elements.
 * @size: size of element.
 * Return: a pointer, or NULL if it fails.
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;
	return ((void *)a);
}
