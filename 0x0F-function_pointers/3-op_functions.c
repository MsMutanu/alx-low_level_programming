#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sums to integers
 * @a: an integer
 * @b: an integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: an integer
 * @b: an integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: an integer
 * @b: an integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: an integer
 * @b: an ineger
 *
 * Return: the result of the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the modulous of two numbers
 * @a: an integer
 * @b: an integer
 *
 * Return: the remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
