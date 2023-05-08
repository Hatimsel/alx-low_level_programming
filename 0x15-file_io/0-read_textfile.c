#include "main.h"

/**
* read_textfile - reads a file
*
* @filename: a pointer to the file name
* @letters: the number of letters to be read and printed
* Return: returns the number of letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t num_read, num_written;
	size_t i;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = (char *) malloc(letters * sizeof(char));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	num_read = read(fd, buf, letters);
	num_written = 0;
	for (i = 0; i < (size_t) num_read; i++)
	{
		if (write(STDOUT_FILENO, &buf[i], 1) == -1)
		{
			free(buf);
			close(fd);
			return (0);
		}
		num_written++;
	}
	free(buf);
	close(fd);
	return (num_written);
}
