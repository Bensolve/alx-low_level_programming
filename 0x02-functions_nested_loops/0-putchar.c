#include <stdio.h>

/**
 * main -  prints _putchar, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int start;
	char text[] = "_putchar";

	for (start = 0; start <= 8; ++start)
		putchar(text[start]);
	putchar('\n');
	return (0);
}
