#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	int start;

	for (start = 122; start >= 97; --start)
		putchar(start);
	putchar('\n');
	return (0);
}
