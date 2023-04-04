#include "main.h"
/**
 * _strspn - gets the lenth of a prefix.
 *
 * @s: The pointer to s.
 *
 * @accept: The pointer to accept.
 *
 * Return: returns number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int add = 0;

	while (*s != '\0')
	{
		char *c = accept;

		while (*c != '\0')
		{
			if (*s == *c)
			{
				add++;
				break;
			}
			c++;
		}
		if (*c == '\0')
		{
			return (add);
		}
		s++;
	}
	return (add);
}
