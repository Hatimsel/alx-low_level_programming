#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - prints numbers
*
* @separator: a string separator
* @n: number of integers to be passed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (separator == NULL)
		{
		printf("%d ", num);
		}
		else if (i == 0)
		{
		printf("%d", num);
		}
		else
		{
		printf("%s%d", separator, num);
		}
	}
	printf("\n");
	va_end(args);
}
