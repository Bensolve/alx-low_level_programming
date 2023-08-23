#include "main.h"

/**
 * is_prime - check if the given number is prime
 * @n: given number
 * @y: number to check
 *
 * Return: Prime number
 */
int is_prime(int n, int y)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else if (y >= n / 2)
		return (1);
	else
		return (is_prime(n, y + 1));
	return (1);
}

/**
 * is_prime_number - returns the prime number
 * @n: given number
 *
 * Return: 1 if given number is prime number
 * 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
