#include <stddef.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to anewly allocated memory,
 * which contains a copy of the string given as a parameter
 * @str: a pointer
 *
 * Return: a poninter to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *p;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (len[i] != '\0')
	{
		i++;
		len++;
	}
	len = len + 1;      /*+1 is the terminating character*/

	p = malloc(sizeof(char) * len);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
