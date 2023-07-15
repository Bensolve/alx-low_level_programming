#include <stdio.h>

/**
 * main - to print the sizes of the various types on the pc
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;
	int number;
	long int largeNumber;
	long long int veryLargeNumber;
	float decimalNumber;

	printf("Size of a char: %zu byte(s)\n", sizeof(letter));
	printf("Size of an int: %zu byte(s)\n", sizeof(number));
	printf("Size of a long int: %zu byte(s)\n", sizeof(largeNumber));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(veryLargeNumber));
	printf("Size of a float: %zu byte(s)\n", sizeof(decimalNumber));
	return (0);
