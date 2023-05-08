#include "main.h"

/**
* error_handler - prints an error message to stderr and exits
*
* @error_code: the error code.
* @msg: the error message to print.
*/

void error_handler(int error_code, char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(error_code);
}

/**
* main - copies the content of a file to another file.
*
* @argc: the number of arguments passed to the program.
* @argv: an array of strings containing the program arguments.
*
* Return: Always 0
*/

int main(int argc, char **argv)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	struct stat st;
	mode_t perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		error_handler(97, "Usage: cp file_from file_to");
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_handler(98, "Error: Can't read from file");
	if (fstat(fd_from, &st) == -1)
		error_handler(98, "Error: Can't read from file");
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perms);
	if (fd_to == -1)
		error_handler(99, "Error: Can't write to file");
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_handler(99, "Error: Can't write to file");
	}
	if (bytes_read == -1)
		error_handler(98, "Error: Can't read from file");
	if (close(fd_from) == -1)
		error_handler(100, "Error: Can't close fd");
	if (close(fd_to) == -1)
		error_handler(100, "Error: Can't close fd");
	return (0);
}
