#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer, or NULL if it fails.
 **/
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	int i, j;
	char *s;

	while (s1[size1 - 1] != '\0' && s1 != NULL)
		size1++;
	while (s2[size2 - 1] != '\0' && s2 != NULL)
		size2++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(size1 + size2 + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		s[i] = s1[i];
	for (j = 0; j < size2; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
