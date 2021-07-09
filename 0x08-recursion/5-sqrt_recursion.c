#include "holberton.h"

/**
 * root - finds square root of a number
 * @i: number
 * @j: possible roots
 * Return: -1 if n is non natural root and the root is found
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
/**
 * _sqrt_recursion - finds square root of a number
 * @n: a number
 * Return: _1 if n does not have a natural square root else the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 0));
}
