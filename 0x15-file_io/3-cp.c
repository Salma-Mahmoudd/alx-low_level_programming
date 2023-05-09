#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @ac: number of command line arguments
 * @av: one-dimensional array of strings
 * Return: 0
 **/
int main(int ac, char **av)
{
	ssize_t file = 1, newFile, tot_n, actual_n, i = 1;
	char *text[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file = open(av[1], O_RDONLY);
	newFile = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (file > 0)
	{
		tot_n = read(file, text, 1024);
		actual_n = write(newFile, text, tot_n);
		if (file == -1|| tot_n == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (newFile == -1 || actual_n == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		newFile = open(av[2], O_WRONLY | O_APPEND);
	}
	if (close(av[1]) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file);
		exit(100);
	}
	if (close(av[1]) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", newFile);
		exit(100);
	}
	return (0);
}
