#include "main.h"

/**
  * leet - Encodes a string into 1337
  * @rep: The string to encode
  *
  * Return: The encoded string
  */

char *leet(char *rep)
{
	int i = 0;
	int j = 0;
	int k = 5;
	char leet[] = {'A', 'E', 'O', 'T', 'L'};
	char elite[] = {'4', '3', '0', '7', '1'};

	while (rep[i])
	{
		j = 0;
		while (j < k)
		{
			if (rep[i] == leet[j] || rep[i] - 32 == leet[j])
			{
				rep[i] = elite[j];
			}
			j++;
		}
		i++;
	}

	return (rep);
}
