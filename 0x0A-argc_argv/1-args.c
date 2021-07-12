#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments passed
 * @argv: array of pointers to the string of arguments passed to the command
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
