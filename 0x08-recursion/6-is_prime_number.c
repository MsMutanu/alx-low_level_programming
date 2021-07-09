#include "holberton.h"
/**
 * prime - checks whether a number is a prime number
 * @i: a number
 * @j: divisor
 * Return: 1 if its a prime number, otherwise 0
 */
int prime(int i, int j)
{
	if (i < 2)
	{
		return (0);
	}
	if (i == 2)
	{
		return (1);
	}
	if (j * j > 1)
	{
		return (1);
	}
	return (prime(i, j + 1));
}

/**
 * is_prime_number - returns 1 if theinput integer is a prime number
 * @n: a number
 * Return: 0 if the number is not a prime number
 */

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}
