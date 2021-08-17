#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -searches for an integer
 * @array: an array
 * @size: number of elements in the array
 * @cmp: ponter to a function
 *
 * Return: the index of the first element,
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		r = cmp(array[i]);
		if (r != 0)
			return (i);
	}
	return (-1);
}
