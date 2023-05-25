#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *s = haystack, *n = needle;

	while (*s)
	{
		n = needle;
		s = haystack;
		while (*n)
		{
			if (*s == *n)
				n++, s++;
			else
				break;
		}
		if (!(*n))
			return (haystack);
		haystack++;
	}
	return ('\0');
}
