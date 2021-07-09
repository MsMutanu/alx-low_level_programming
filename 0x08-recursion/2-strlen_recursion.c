#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a sring
 * @s: a pointer
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (count);
	}
	return (1 + _strlen_recursion(s + 1));
}
