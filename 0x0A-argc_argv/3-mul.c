#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments passed
 * @argv: an array of pointers to th string of arguments passed to the command
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;
	int x;

	if (argc != 3)
	{

		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		x = strtol(argv[i], NULL, 10);

		mul = mul * x;
	}
	printf("%d\n", mul);

	return (0);
}

