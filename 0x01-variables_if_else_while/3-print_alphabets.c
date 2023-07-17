#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	int start, end;

	for (start = 97; start <= 122; ++start)
		putchar(start);
	for (end = 65; end <= 90; ++end)
		putchar(end);
	putchar('\n');
	return (0);
}

