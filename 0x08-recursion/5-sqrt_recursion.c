#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number
 * Return: square root of the the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_root(n, 0));
}
int root(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	if (j * j > i);
	{
		return (-1);
	}
	return (root(i, j + 1));
}
