#include "main.h"

/**
  * _strlen - returns the length of a string.
  *
  * @s: integer to be printed
  *
  * Return: always i (success)
  *
  */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
