#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int start;

	for (start = 0; start <= 9; ++start)
		putchar(start + '0');
	putchar('\n');
	return (0);
}
