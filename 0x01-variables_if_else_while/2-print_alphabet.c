#include <stdio.h>

/**
 * main : prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int start;

	for (start = 97; start <= 122; ++start)
		putchar(start);
	putchar('\n');
	return (0);
}
