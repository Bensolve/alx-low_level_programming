#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @num: character to be checked
 *
 * Return: the absolute value of num
 */
int _abs(int num)
{
	int res;

	if (num > 0)
	{
		res = num;
		return (res);
	}
	else
	{
		res = -1 * num;
		return (res);
	}
}

