#include "main.h"

/**
  * print_line - prints a straight line
  * @n: the number of times the character _ should be printed
  * @pnt: printing underscore
  */

void print_line(int n)
{
	char pnt = 98 * n;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
		_putchar(pnt);
	_putchar('\n');
}
