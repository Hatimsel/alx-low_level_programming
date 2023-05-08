#include "main.h"

/**
* create_file - creates a file.
*
* @filename: a pointer to the file name
* @text_content: string to write to the file
*
* Return: returns 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, result;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR)
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		result = 1;
	}
	else
	{
	len = strlen(text_content);
	result = (write(fd, text_content, len) == (ssize_t) len) ? 1 : -1;
	}
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (result);
}
