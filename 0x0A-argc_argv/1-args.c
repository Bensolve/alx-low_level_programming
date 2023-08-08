#include <stdio.h>
#include <string.h>
/**
 * main - to print the number of arguments
 * @argc: number of arguments
 * @argv: collection of arguments
 *
 * Return: 0;
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	

	printf("%d\n", argc - 1);
	return (0);
}

