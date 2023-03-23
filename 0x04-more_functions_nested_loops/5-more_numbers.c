#include "main.h"

/**
  * more_numbers - prints 10 times the numbers
  *
  */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
