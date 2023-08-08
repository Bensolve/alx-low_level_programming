#include <stdio.h>
#include <stdlib.h>

/**
 * main - to display multiplication of two numbers
 * @argc: number of arguments
 * @argv: collection of arguments
 *
 * Return: 0 It is works,
 * 1 if the arguments are not two arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
