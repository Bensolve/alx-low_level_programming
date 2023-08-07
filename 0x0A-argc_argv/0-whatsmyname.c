#include <stdio.h>

/**
 * main - to display its name followed by a new line
 *@argv: collection of arguments
 *@argc: number of arguments
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
