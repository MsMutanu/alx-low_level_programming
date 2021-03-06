#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: a number
 * Return: the factorial of the number
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n == 0)
	{
		return (1);
	}
	return (-1);
}
