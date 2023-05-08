#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
*
* @filename: a pointer to the filename
* @text_content: string to add at the end of the file
*
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result = -1;
	ssize_t num_written;
	size_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		num_written = write(fd, text_content, len);
		if (num_written == -1 || (size_t)num_written != len)
			result = -1;
		else
			result = 1;
	}
	else
	{
		result = 1;
	}
	if (close(fd) == -1)
		result = -1;
	return (result);
}
