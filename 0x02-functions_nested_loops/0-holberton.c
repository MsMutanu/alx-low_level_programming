#include "holberton.h"

/**
 * main-prints Holberton, followed by a new line
 * Return: always 0(Success)
 */

int main(void)
{
	char a[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
	char b;
	int i = 0;

	for (; i < 10; i++)
	{
		b = a[i];
		_putchar(b);
	}
	return (0);
}
