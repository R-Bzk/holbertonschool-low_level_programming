#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creat array
 * @c: array content
 * @size: size of the array
 *
 * Return: array.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);

}
