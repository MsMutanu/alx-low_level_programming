#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a sring
 * @s: a pointer
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != 0)
	{
		count++;
		_strlen_recursion(++s);
	}
	return (count);
}
