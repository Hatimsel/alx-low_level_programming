#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	/* i = argv[1];
	char* j = argv[2];*/
	int result;

	if (argc < 3)
		{
			printf("Error\n");
			return (1);
		}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);

}
