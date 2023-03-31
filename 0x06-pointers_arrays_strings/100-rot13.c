#include "main.h"

/**
 * rot13 - encodes a string
 *
 * @s: the string to be encoded
 *
 * Return: return the encoded string
 *
 */

char *rot13(char *s)
{
	int i  = 0;

	while (s[i])
	{

	while (((s[i] >= 'a' && s[i] <= 'z')) || ((s[i] >= 'A' && s[i] <= 'Z')))
	{
		if (((s[i] >= 'a' && s[i] <= 'm')) || ((s[i] >= 'A' && s[i] <= 'M')))
		{
			s[i] += 13;
			break;
		}

		s[i] -= 13;
		break;
	}

	i++;
	}
	return (s);
}
