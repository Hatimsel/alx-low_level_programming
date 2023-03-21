#include "main.h"
/**
 * print_alphabet_x10 - Prints x10 times the alphabet in lowercase.
 *
 * return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
