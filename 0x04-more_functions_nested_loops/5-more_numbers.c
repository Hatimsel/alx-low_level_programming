#include "main.h"

/**
  * more_numbers - prints 10 times the numbers
  *
  */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i <= 10; i++)
	{
		for (n = 48; n <= 57; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
