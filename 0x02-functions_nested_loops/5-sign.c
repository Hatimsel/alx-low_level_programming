#include "main.h"
/**
  * print_sign - Prints the sign of a number
  * @n: is a number
  * Return: Shows 1 when n is greater than 0
  * Shows 0 when n equals 0
  * Shows - when n is less than 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
