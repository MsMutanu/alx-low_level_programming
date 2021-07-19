#include <stdio.h>

/**
 * main - prints name of the file it was compiled from
 *
 * Return: 0 if succesful, 1 otherwise
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
