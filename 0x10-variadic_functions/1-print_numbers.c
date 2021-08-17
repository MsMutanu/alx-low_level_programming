#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed to the function,
 * with their separator
 * @separator: the separator between the numbers
 * @n: Number is numbers to be printed
 *
 */
void  print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
