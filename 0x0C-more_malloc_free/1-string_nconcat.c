#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: first bytes of s2 to be concat
 * Return: a pointer, or NULL if it fails.
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0;
	unsigned int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n >= size2)
		n = size2;
	s = malloc(size1 + n + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
