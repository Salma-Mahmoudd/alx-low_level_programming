#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: the prefix to be measured.
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, c = 0, k = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				c++;
				k = 1;
			}
		}
		if (k == 0)
			return (c);
		s++;
	}
	return (c);
}
