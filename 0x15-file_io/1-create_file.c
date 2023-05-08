#include "main.h"
#include <string.h>
/**
 * create_file - creates a file.
 * @filename: pointer of file name
 * @text_content: Null pointer to write to the file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int newFile, addedText = 0;

	if (!filename)
		return (-1);
	newFile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content)
		addedText = write(newFile, text_content, strlen(text_content));
	if (newFile == -1 || addedText == -1)
		return (-1);
	close(newFile);
	return (1);
}
