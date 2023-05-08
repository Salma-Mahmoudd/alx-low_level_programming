#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer of file name
 * @text_content: pointer of string to write to the file.
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, addedText = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_ APPEND | O_WRONLY);
	if (text_content)
		addedText = write(file, text_content, strlen(text_content));
	if (file == -1 || addedText == -1)
		return (-1);
	close(newFile);
	return (1);
}
