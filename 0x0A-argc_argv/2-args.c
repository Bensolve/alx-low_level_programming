#include <stdio.h>

/**
 * main - display all arguments on a new line
 * @argc: number of arguments
 * @argv: collection of arguments
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int start;

	for (start = 0; start < argc; ++start)
		printf("%s\n", argv[start]);
	return (0);
}
