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
