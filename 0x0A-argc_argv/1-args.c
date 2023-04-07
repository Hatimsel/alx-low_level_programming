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

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
