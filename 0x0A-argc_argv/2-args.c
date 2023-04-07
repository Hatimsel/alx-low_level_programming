#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: counts arguments
 *
 * @argv: number of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
