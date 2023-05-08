#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer of file name
 * @letters: number of letters it should read and print
 * Return: actual number of letters or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, tot_n, actual_n;
	char* text;

	if (filename == NULL)
		return (0);
	text = malloc(letters);
	if (!text)
		return (0);
	file = open (filename, O_RDONLY);
	tot_n = read (file, text, letters);
	actual_n = write(STDOUT_FILENO, text, tot_n);
	if (file == -1 || tot_n == -1 || actual_n == -1 || actual_n != tot_n)
	{
		free(text);
		return (0);
	}
	free(text);
	close(file);
	return (actual_n);
}
