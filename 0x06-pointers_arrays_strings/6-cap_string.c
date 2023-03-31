#include "main.h"

/**
 *
 *
 *
 *
 *
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == 32)
		{
			if (str[i + 1] >= 65 && str[i + 1] <= 90)
			{
				str[i + 1] = str[i + 1];
			}
			else
			{
				str[i + 1] -= 32;
			}
		}
		if (str[i] == 9 || str[i] == 10 || ((str[i] == 46) && (str[i + 1] != 32)))
			str[i + 1] -= 32;
		/*if (str[i] == 9)
		{
			str[i + 1] -= 32;
		}
		if (str[i] == 46)
		{
			if (str[i + 1] != 32)
			{
				str[i + 1] -= 32;
			}
		}
		if (str[i] == 10)
		{
			str[i] -= 32;
		}*/
		i++;
	}
	return (str);
}
