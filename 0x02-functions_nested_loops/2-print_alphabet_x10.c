#include "holberton.h"
/**
 * print_alphabet_x10- prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char alph = 'a';
	int i = 0;

	while (i < 10)
	{
		while (alph != 'z' + 1)
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
