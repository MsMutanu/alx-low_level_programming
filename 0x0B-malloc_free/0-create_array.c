#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of char,
 * and initializes it with a specific char
 * @size: size of array
 * @c: a an array of chars
 *
 * Return: a pointer to the array, or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size_of(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
