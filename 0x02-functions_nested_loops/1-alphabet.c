#include "holberton.h"
/**
 * print_alphabet -prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char alph = 'a';
	while (alph != 'z' + 1)
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}

