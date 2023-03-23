#include "main.h"

/**
  * print_diagonal - prints a diagonal line
  * @n: the number of prints
  */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, o;

		for (i = 0; i < n; i++)
		{
			for (o = 0; o < n; o++)
			{
				if (o == i)
					_putchar(\\);
				else if (o < i)
					_putchar('');
			}
			_putchar('\n');
		}
	}
}
