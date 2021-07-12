#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed
 * @argv: an array of pointers to the strng of arguments passed to the command
 *
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
