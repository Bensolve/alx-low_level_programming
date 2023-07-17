#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int start, end;

	for (start = 0; start <= 9; ++start)
		putchar(start + '0');
	for (end = 97; end <= 102; ++end)
		putchar(end);
	putchar('\n');
	return (0);
}
