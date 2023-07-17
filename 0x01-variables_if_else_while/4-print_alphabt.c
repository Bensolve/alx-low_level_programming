#include <stdio.h>

/**
 * main - prints the alphabet in lowercase execpt q and e
 *
 * Return: Always 0
 */
int main(void)
{
	int start;

	for (start = 97; start <= 122; ++start)
	{
		if (start != 101 && start != 113)
			putchar(start);
	}
	putchar('\n');
	return (0);
}
