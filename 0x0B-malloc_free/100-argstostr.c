#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: number of command line arguments
 * @av: one-dimensional array of strings
 * Return: a pointer to a new string, or NULL if it fails.
 **/
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, size = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
			size++, j++;
		size++, j = 0;
	}
	s = (char *)malloc(sizeof(char) * (size+1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
			s[x++] = av[i][j];
		s[x++] = '\n', j = 0;
	}
	return (s);
}
