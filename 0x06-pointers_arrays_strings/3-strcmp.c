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
	int len = 0;
	int result = 0;
	int cpr;


	while (s1[len_s])
	{
		len_s++;
	}
	while (s2[len_s2])
	{
		len_s2++;
	}

	if (len_s <= len_s2)
	{
		cpr = len_s;
	}
	else
	{
		cpr = len_s2;
	}
	while (len <= cpr)
	{
		if (s1[len] == s2[len])
		{
			len++;
			continue;
		}
		else
		{
			result = s1[len] - s2[len];
			break;
		}

		len++;
	}

	return (result);
}
