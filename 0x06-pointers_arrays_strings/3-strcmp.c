#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */

int _strcmp(char *s1, char *s2)
{
	int len_s = 0;
	int len_s2 = 0;
	int result;

	while (s1[len_s] != '\0')
	{
	len_s++;
	}
	while (s2[len_s2] != '\0')
	{
	len_s2++;
	}
	result = *s1 - *s2;
	return (result);
}
