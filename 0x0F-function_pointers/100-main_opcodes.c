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
	int (*address)(int, char **) = main;
	unsigned char opcode;

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

	for (i = 0; i < a; i++)
	{
		opcode = *(unsigned char *)address;

		printf("%02x ", opcode);

		if (i != a - 1)
		{
			printf(" ");
		}
		address++;
	}
	printf("\n");
	return (0);
}
