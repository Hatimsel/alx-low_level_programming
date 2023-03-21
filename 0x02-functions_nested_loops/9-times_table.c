#include "main.h"
/**
  * time_table - Prints the 9 times table
  *
  */
void times_table(void)
{
	int i = 9;
	int j;

	for (j = 0; j <= 10; j++)
	{
		_putchar(i * j);
	}
	_putchar('\n');
}
