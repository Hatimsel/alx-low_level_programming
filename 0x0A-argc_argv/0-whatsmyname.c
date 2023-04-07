#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: counts arguments
 *
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = argc;

	printf("%s\n", argv[i - 1]);
	return (0);
}
