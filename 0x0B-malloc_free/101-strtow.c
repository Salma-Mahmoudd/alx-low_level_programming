#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **strtow - splits a string into words.
 * @str: string to split
 * Return: a pointer to the array, or NULL if it fails.
 **/
char strtow(char *str)
{
	int i = 0, j = 0, c = 0, x = 0, w = 0;
	char **words;
	if (str == NULL && str == "")
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (str[i + 1] == ' ')
				w++;
		}
		i++;
	}
	words = (char **)malloc(sizeof(char *) * w + 1);
	if (words == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			j++;
			if (str[i + 1] == ' ')
			{
				words[c] = (char *)malloc(sizeof(char) * j + 1);
				if (words[c] == NULL)
				{
					while (--c >= 0)
						free(words[c]);
					free(words);
					return (NULL);
				}
				for(x = 0; x < j; x++)
				{
					words[c][x] = str[i + x + 1 - j];
				}
				words[c][x] = '\0';
				c++, j = 0;
			}
		}
		i++;
	}
	words[c] = '\0';
}
