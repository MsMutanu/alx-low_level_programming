#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number
 * Return: square root of the the number
 */
int root(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	if (j * j > i)
	{
		return (-1);
	}
	return (root(i, j + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 0));
}
