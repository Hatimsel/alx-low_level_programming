#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* @argc: number of arguments
* @argv: array of arguments
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;
	int a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	void (*fptr)(void);

	fptr = (void (*)(void)) &main;
	char *p = (char *) fptr;

	for (i = 0; i < a; i++)
	{
		printf("%02x ", p[i] & 0xff);
	}
	printf("\n");
	return (0);
}
