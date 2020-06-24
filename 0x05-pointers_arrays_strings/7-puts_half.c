#include "holberton.h"
/**
 *puts_half -function that prints half of a string, followed by a new line.
 *@str: char
 *
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i / 2;
	if (i % 2 == 0)
	{
		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		j += 1;
		while (i > j)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
