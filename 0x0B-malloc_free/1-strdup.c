#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - create pointer contains a copy of the string given
 * @str: string to copy
 * Return: a pointer to the array, or NULL if it fails.
 **/
char *_strdup(char *str)
{
	int j, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i - 1] != '\0')
		i++;
	s = malloc(i);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = str[j];
	return (s);
}
